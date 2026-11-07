#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],vis[500005],ans[500005];
stack<int>s; 
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		memset(vis,0,sizeof(vis));
		for(int j=i;j<=n;j++){
			if(vis[a[j]]==0){
				s.push(a[j]);
				vis[a[j]]=1;
			}
			else{
				while(s.top()!=a[j]){
					s.pop();
				}
				s.pop();
				s.push(a[j]);
			}
		}
		while(!s.empty()){
			ans[s.top()]++;
			s.pop();
		}
		
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<' ';
	}
	return 0;
}
