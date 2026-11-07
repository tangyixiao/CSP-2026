#include <bits/stdc++.h>
using namespace std;
const int N=500005;
int cnt[N];
int n,m,a[N];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0); 
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++){
		stack<int> s;
		bool vis[N];
		memset(vis,0,sizeof(vis));
		for(int j=i;j<=n;j++){
			if(vis[a[j]]){
				while(s.top()!=a[j]){
					vis[s.top()]=0;
					s.pop();
				}
			}else{
				vis[a[j]]=1;
				s.push(a[j]);
			}
		}
		while(!s.empty()){
			cnt[s.top()]++;
			s.pop();
		}
	}for(int i=1;i<=m;i++) cout<<cnt[i]<<' ';
	return 0;
} 
