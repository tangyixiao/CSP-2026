#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N=2e5+10;
int n,m;
int a[N];
bool vis[N];
int ans[N];
inline void h(int x){
	for(int i=x;i<=n;i++)
		for(int j=i;j>=x;j--){
			if(a[i]==a[j]&&i!=j&&!vis[j]&&!vis[i]){
				for(int k=j;k<i;k++)
					vis[k]=1;
			}
		}
//	for(int i=x;i<=n;i++)	cout<<vis[i]<<' ';
//	cout<<'\n';
	for(int i=x;i<=n;i++)
		if(!vis[i])	ans[a[i]]++;
	for(int i=1;i<=n;i++)	vis[i]=0;
}
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)	cin>>a[i];
	for(int i=1;i<=n;i++)	h(i);
	for(int i=1;i<=m;i++)	cout<<ans[i]<<' ';
	return 0;
} 

/*
10 3
3 1 2 1 3 2 3 1 2 1



*/
