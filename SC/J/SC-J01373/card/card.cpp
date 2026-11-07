#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=5e5+5;
int a[N],ans[N];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)	cin>>a[i];
	for(int k=1;k<=n;k++){
		vector<int> p(N,0);
		vector<bool> vis(N,0);
		for(int i=k;i<=n;i++){			
			if(!vis[a[i]]){
				p[a[i]]=i;
				vis[a[i]]=1;	
			}
			else{
				for(int j=p[a[i]]+1;j<i;j++){
					vis[a[j]]=0;
					p[a[j]]=0;
				}
				p[a[i]]=i;
			}			
		}
		for(int i=1;i<=m;i++)	if(vis[i])	ans[i]++;
	}
	for(int i=1;i<=m;i++)	cout<<ans[i]<<" ";
	return 0;
}