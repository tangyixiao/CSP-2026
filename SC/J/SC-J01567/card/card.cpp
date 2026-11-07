#include<bits/stdc++.h>
using namespace std;
const int MAXN=5e5+5,MAXM=3e5+5;
int n,m;
int a[MAXN],ans[MAXM];
bool flag[MAXM],vis[MAXM];
stack<int> s;
int main() {
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1; i<=n; ++i) {
		cin>>a[i];
		vis[a[i]]=1;
	}
	for(int i=1; i<=n; ++i) {
		memset(flag,0,sizeof flag);
		for(int j=i; j<=n; ++j) {
			if(flag[a[j]]==0) {
				s.push(a[j]);
				flag[a[j]]=1;
			} 
			else {
				while(s.top()!=a[j]&&!s.empty()) {
					flag[s.top()]=0;
					s.pop();
				}
			}
		} 
		while(!s.empty()) {
			flag[s.top()]=0;
			ans[s.top()]++;
			s.pop();
		}
	}
	for(int i=1; i<=m; ++i) {
		if(vis[i]==1) {
			cout<<ans[i]<<' ';
		}
	} 
	return 0;
}