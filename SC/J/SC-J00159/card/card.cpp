#include<bits/stdc++.h>
using namespace std;
int ans[10010],a[10010],n;
#define ui unsigned int
void solve(int x){
	map<int,bool> m;
	vector<int> q;
	for(ui i=x;i<=n;i++){
		if(m[a[i]]){
		for(ui j=0;j<q.size();j++){
			if(q[j]==a[i]){
				for(ui k=1;k<=q.size()-j+1;k++)
					q.pop_back();
				goto nxt;
			}
		}
	}
	nxt:; 
		q.push_back(a[i]);
		m[a[i]]=1;
	}
	for(ui i=0;i<q.size();i++)
	ans[q[i]]++;
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	cin>>a[i];
	for(int i=1;i<=n;i++)
		solve(i);
	for(int i=1;i<=m;i++)
		cout<<ans[i]<<' '; 
}