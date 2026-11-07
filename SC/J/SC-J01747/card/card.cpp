#include <bits/stdc++.h>

using namespace std;

#define int long long

const int N=5e5+30,M=3e5+30;

int a[N];
bool vis[N];
int fst[M];
int k[N];
int ans[M];

signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int t=1;t<=n;t++){
		int cnt=0;
		for(int i=1;i<=n;i++){
			vis[i]=0;
		} 
		for(int i=t;i<=n;i++){
//			cout<<fst[1]<<'\n';
			if(!vis[a[i]]){
				k[++cnt]=a[i];
				fst[a[i]]=cnt;
				vis[a[i]]=1;
			}else{
				int tmp=cnt;
				for(int j=tmp;j>=fst[a[i]];j--){
					cnt--;
				}
				k[++cnt]=a[i];
				for(int j=1;j<=m;j++){
					vis[j]=0;
				}
				vis[a[i]]=1;
				for(int j=1;j<=cnt;j++){
					vis[k[j]]=1;
					fst[k[j]]=j;
				}
			}
//			cout<<cnt<<'\n'; 
			
		}
//		for(int i=1;i<=cnt;i++){
//			cout<<k[i]<<' ';
////			cout<<vis[k[i]]<<'\n';
//		}
//		cout<<'\n';
		for(int i=1;i<=m;i++){
			if(vis[i]){
				ans[i]++;
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<' ';
	}
	return 0;
} 