#include<bits/stdc++.h>
using namespace std;

int n,m;
bool vis[300005];

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin.tie(nullptr)->sync_with_stdio(false);
	cin>>n>>m;
	vector<int> a(n+5,0);
	vector<int> mark(m+5,0);
	queue<int> tmp;
	stack<int> stk;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++) tmp.push(a[j]),vis[a[j]]=false;
		while(!tmp.empty()){
			int u=tmp.front();
			tmp.pop();
			if(vis[u]){
				while(!stk.empty() && stk.top()!=u) vis[stk.top()]=false,stk.pop();
			}
			else{
				stk.push(u);
				vis[u]=true;
			}
		}
		while(!stk.empty()){
			mark[stk.top()]++;
			stk.pop();
		}
	}
	
	for(int i=1;i<=m;i++) cout<<mark[i]<<' ';
	return 0;
}