#include<bits/stdc++.h>
using namespace std;
const int N=6e5;
int n,m,a[N],d[N];
long long c[N],s[N];
bool v[N];
vector<int>g[N];
inline void topu(){
	queue<int>q;
	for(int i=1;i<=m;++i)
		if(!d[i])q.push(i);
	while(q.size()){
		int u=q.front();
		q.pop();
		for(int i=0;i<g[u].size();++i){
			s[g[u][i]]+=s[u];
			if(--d[g[u][i]]==0)q.push(g[u][i]);
		}
	}
	for(int i=1;i<=m;++i)cout<<s[i]<<' ';
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;++i){
		cin>>a[i];
		++c[a[i]];
	}
	for(int i=n;i>=1;--i)
		if(!v[a[i]]){
			if(i!=n)g[a[i]].push_back(a[i+1]),++d[a[i+1]];
			s[a[i]]=c[a[i]];
			v[a[i]]=1;
		}
	topu();
	return 0;
}
