#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],ct[300005];
bool bol[300005];
stack<int> s;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(bol[a[j]]){
				while(!s.empty()){
					int u=s.top();
					s.pop();
					bol[a[j]]=false;
					if(u==a[j]) break;
				}
				s.push(a[j]);
				bol[a[j]]=true;
			}
			else{
				s.push(a[j]);
				bol[a[j]]=true;
			}
		}
		while(!s.empty()){
			int v=s.top();
			s.pop();
			bol[v]=false;
			ct[v]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ct[i];
		if(i<m) cout<<" ";
	}
	cout<<'\n';
	return 0;
}
