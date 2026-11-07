#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define int ll
const int N=2e5+5;
const int B=35;
const int X=2e3+5;
int n,m,a[N],s[B];
int ans;
int fstp[B];
int dp[N][25];
int pre[N],suf[N];
int mx;
bool cmp(int x,int y){
	return x<y;
//	int xv=__builtin_clzll(x);
//	int yv=__builtin_clzll(y);
//	int xp=__builtin_popcountll(x);
//	int yp=__builtin_popcountll(y);
//	if(xv!=yv){
//		return xv>yv;
//	}else{
//		return xp<yp;
//	}
}
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		for(int j=0;j<=30;j++){
			if((a[i]>>j)&1){
				s[j]++;
			}
		}
	}
	if(n*n*m<=1e8){
		for(int i=1;i<=n;i++){
			dp[i][1]=a[i];
			for(int j=1;j<=i-1;j++){
				for(int k=2;k<=j+1;k++){
					dp[i][k]=max(dp[i][k],dp[j][k-1]&a[i]);
				}
			}
		}
		mx=dp[n][m];
	}
	if(m>=n-1){
		pre[1]=a[1];
		for(int i=2;i<=n;i++){
			pre[i]=pre[i-1]&a[i];
		}
		suf[n]=a[n];
		for(int i=n-1;i>=1;i--){
			suf[i]=suf[i+1]&a[i];
		}
		if(m==n){
			cout<<pre[n];
			return 0;
		}
		int ans=0;
		for(int i=1;i<=n;i++){
			ans=max(ans,pre[i-1]&suf[i+1]);
		}
		cout<<ans;
		return 0;
	}
	sort(a+1,a+1+n,cmp);
	for(int i=0;i<=31;i++){
		fstp[i]=n+1;
	}
	for(int i=1;i<=n;i++){
		for(int j=30;j>=0;j--){
			if((a[i]>>j)&1){
				fstp[j]=min(fstp[j],i);
//				break;
			}
		}
	}
	ans=(1u<<30)-1;
	for(int i=30;i>=0;i--){
		if(s[i]>=m){
//			ans|=(1<<i);
			for(int p=1;p<=m;p++){
				int j=fstp[i+1]-p;
				for(int k=i-1;k>=0;k--){
					if((a[j]>>k)&1){
						s[k]--;
					}
				}
				ans&=a[j];
			}
			m-=s[i];
		}
	}
	cout<<max(mx,ans);
	return 0;
}
/*
5 3
1 3 7 7 15

*/
