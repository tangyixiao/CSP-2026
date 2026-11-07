#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N = 2e5 + 5;
ll n,m,a[N],dp[2][N],mx=-1145141919810,as=0b1111111111111111;//×´Ñ¹ÔõÃ´Ð´À´×Å£©£©£© 
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(ll i=1;i<=n;i++){cin>>a[i];mx=max(a[i],mx);as&=a[i];}
	if(m==1){cout<<mx<<endl;return 0;}
	if(m==n){cout<<as<<endl;return 0;}
	dp[1][1]=dp[0][1]=a[1];
	for(ll i=2;i<=n;i++){
		dp[1][i]=max(dp[1][i-1]&a[i],dp[1][i-1]);
		dp[0][i]=max(dp[1][i-1],dp[0][i-1]);
	}
	cout<<max(dp[0][m],dp[1][m])<<endl;
	return 0;
}
