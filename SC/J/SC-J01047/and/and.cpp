#include <bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int a[N],dp[N]; 
int lowbit(int x){
	int sum=0;
	while(x!=0){
		if(x%2==1){
			sum++;
		}
		x/=2;
	}
	return sum;
}
bool cmp(int a,int b){
	return lowbit(a)>lowbit(b);
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin >> n >> m;
	for(int i=1;i<=n;i++){
		cin >> a[i];
	}
	sort(a+1,a+n+1,cmp);
	memset(dp,-0x3f3f3f3f,sizeof(dp));
	dp[0]=a[1];
	for(int i=1;i<=n;i++){
		for(int j=m;j>=1;j--){
			dp[j]=max(dp[j],dp[j-1]&a[i]);
		}
	}
	cout << dp[m];
}