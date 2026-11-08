#include <bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int n,m,f=1,ans;
int a[N],e[N][30],b[N],vis[N];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		int x=a[i],t=1;
		while(x){
			e[i][t]=x%2;
			if(e[i][t]) b[t]++;
			x/=2;
			t++;
		}
	}
//	for(int i=1;i<=n;i++){
//		for(int j=29;j>=1;j--){
//			cout<<e[i][j];
//		}
//		cout<<'\n';
//	}
	for(int j=29;j>=1;j--){
		if(b[j]<m) continue;
		if(f){
			for(int i=1;i<=n;i++)
				if(e[i][j])
					vis[i]=1;
			f=0;
			ans+=(1<<(j-1));
//			cout<<j<<'\n';
		}else{
			int k=0;
			for(int i=1;i<=n;i++){
				if(e[i][j]&&vis[i]){
					k++;
					vis[i]=2;
				}
			}
			if(k>=m){
				ans+=(1<<(j-1));
				for(int i=1;i<=n;i++){
					if(vis[i]==2) vis[i]=1;
					else vis[i]=0;
				}
			}else{
				for(int i=1;i<=n;i++){
					if(vis[i]==2) vis[i]=1;
				}
			}
//			cout<<k<<' '<<ans<<' ';
		}
	}
	cout<<ans;
	return 0;
}
/*
4 2
3 15 12 12
*/
