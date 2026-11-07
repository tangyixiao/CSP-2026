#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005],ans,ans1,maxx;
void dfs(){
	for(int i=1;i<(1<<n);i++){
		int cnt=0;
		int pos=(1<<n)-1;
		for(int j=0;j<n;j++){
			if(i&(1<<j)){
				cnt++;
				pos=pos&a[j+1];
			} 
		}
		if(cnt==m) ans=max(ans,pos);
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	cin >> a[1];
	ans1=a[1],maxx=a[1];
	for(int i=2;i<=n;i++){
		cin >> a[i];
		ans1&=a[i];
		maxx=max(maxx,a[i]);
	}
	if(n<=20){
		dfs();
		cout << ans;
		return 0; 
	} 
	if(m==n){
		cout << ans1;
		return 0;
	}
	if(m==1){
		cout << maxx;
		return 0;
	}
	int maxxx=0;
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			maxxx=max(maxxx,a[i]&a[j]);
		}
	}
	cout << maxxx;
	return 0;
} 
