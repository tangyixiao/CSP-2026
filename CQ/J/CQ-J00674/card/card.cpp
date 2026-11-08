#include<bits/stdc++.h>
using namespace std;
int n,m,a[500001],t[300001];
int main(){
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n;i++){
		map<int,bool> s;
		stack<int> g;
		for(int j=i;j<n;j++){
			if(s[a[j]]){
				while(g.top()!=a[j]){
					s[g.top()]=0;
					g.pop();
				}
			}
			else{
				s[a[j]]=1;
				g.push(a[j]);
			}
		}
		while(!g.empty()){
			t[g.top()]++;
			g.pop();
		}
	}
	for(int i=1;i<=m;i++)
		cout<<t[i]<<' ';
	return 0;
} 
