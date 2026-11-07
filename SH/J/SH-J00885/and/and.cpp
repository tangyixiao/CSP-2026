#include<bits/stdc++.h>
using namespace std;
const int N = 2e5+10;
int n,m,cnt=0,ans=1;
int a[N],dp[N];
bool cmp(int x,int y) {
	return x>y;
}
bool check(){
	for(int i=1;i<=n;i++){
		if(a[i] % 2==0) return false; 
	}	
	return true;
}

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i=1;i<=n;i++) {
		cin >> a[i];
	}
	if(n==m){
		for(int i=1;i<=n;i++){
			a[1]=a[1]&a[i];
		}
		cout << a[1];
		return 0;
	}
	if(m==1){
		sort(a+1,a+n+1,cmp);
		cout << a[1];
		return 0;
	}
	if(m==n-1){
		sort(a+1,a+n+1,cmp);
		for(int i=1;i<=m;i++){
			a[1] = a[1]&a[i];
		}
		cout << a[1];
		return 0;
	}
	if(m==2){
		sort(a+1,a+n+1,cmp);
		a[1] = a[1]&a[2];
		cout << a[1];
		return 0;
	}
	if(check()){
		cout << a[n];
	}
	sort(a+1,a+n+1,cmp);
	for(int i=1;i<=m;i++){
		a[1] = a[1]&a[i];
	}
	cout << a[1];
	fclose(stdin);
	fclose(stdout);
	return 0;
}
/*
	dp[n] = a[n];
	for(int i=n-1;i>=1;i--){
		for(int j=1;j<=n;j++){
			if(cnt>m) break;
			int abc = dp[i];
			dp[i] = max(dp[i],dp[i]&dp[j]);
			if(dp[i] != abc||dp[i] == dp[j]) cnt++;
		}
	}
	sort(dp+1,dp+n+1,cmp);
	sort(a+1,a+n+1,cmp);
	if(cnt<m){
		for(int i=2;i<=m-cnt+1;i++)dp[1]&a[i];
	}
	cout << dp[1];
	return 0;
}
*/
