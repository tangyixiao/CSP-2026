#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500005],vis[300005],t[300005];
int main(){
	freopen("r","card.in",stdin);
	freopen("w","card.out",stdout);
	cin>>n>>m;
	stack<int> s;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++)vis[j]=0;
		while(!s.empty())s.pop();
		for(int j=i;j<=n;j++){
			if(vis[a[j]]==0){
				vis[a[j]]=1;
				s.push(a[j]);
			}else{
				while (s.top()!=a[j]){
					vis[s.top()]=0;
					s.pop();
				}
			}
		}
		for(int j=1;j<=m;j++){
			t[j]+=vis[j];
		}
	}
	for(int i=1;i<=m;i++)cout<<t[i]<<' ';
	return 0;
}