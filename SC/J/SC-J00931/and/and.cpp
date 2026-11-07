#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
const int N=2e5+10; 
int n,m;
int a[N],vis[40][N],zg[40][N],bl=31,ks,ans=0;
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		int ls=a[i],sum=0;
		while(ls){
			vis[++sum][i]=ls%2;
			ls/=2;
		}
		zg[31][i]=1;
	}
	for(int i=30;i>=1;i--){
		int cnt=0;
		for(int j=1;j<=n;j++){
			if(vis[i][j]==1 and zg[bl][j]==1){
				cnt++;
				zg[i][j]=1;
			}
		}
		if(cnt>=m){
			bl=i;
		}
	}
	for(int i=1;i<=n;i++){
		if(zg[bl][i]==1){
			if(ks==0){
				ans=a[i];
				ks=1;
			}
			else{
				ans=(ans&a[i]);
			}
		} 
	}
	cout<<ans;
	return 0;
}