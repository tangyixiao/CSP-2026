#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500005];
int ans[50005];
stack<int> s;
int vis[50005]={0};
int main(){
	freopen("card.in","r",stdin);freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		while(!s.empty())s.pop();
		memset(vis,0,sizeof(vis));
		for(int j=i;j<=n;j++){
			if(!vis[a[j]]){
				vis[a[j]]++;
				s.push(a[j]);
			}
			else{
				while(!s.empty()){
					int v=s.top();
					s.pop();
					vis[v]--;
					if(v==a[j])break;
				}
				s.push(a[j]);
				vis[a[j]]++;
			}
		}
		while(!s.empty()){
			ans[s.top()]++;
			s.pop();
		}
	}
	cout<<ans[1];
	for(int i=2;i<=m;i++)cout<<" "<<ans[i];
	return 0; 
} 
