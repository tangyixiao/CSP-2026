#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int N = 2e5+5;
int n,m,a;
int vis[N][35];
bool viss[N];
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a;
		for(int j=30;j>=0;j--){
			bool f=(1<<j)&a;
			vis[i][j]=f;
		}
	}
	int ans=0;
	for(int j=30;j>=0;j--){
		int cnt=0;
		for(int i=1;i<=n;i++)if(!viss[i]){
			cnt+=vis[i][j];
		}
		if(cnt>=m){
			ans+=(1<<j);
			for(int i=1;i<=n;i++)if(!vis[i][j]){
				viss[i]=1;
			}
		}
	}
	cout<<ans;
	return 0;
}
