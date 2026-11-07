#include<bits/stdc++.h>
using namespace std;
const int N=1e4+99;
int a[N],vis[N],ans[N],n,m;
stack<int> table;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(!vis[a[j]]){
				table.push(a[j]);
				vis[a[j]]=1;
			}else{
				while(!table.empty()){
					int x=table.top();
					vis[x]=0;
					table.pop();
					if(x==a[j]) break;
				}
				vis[a[j]]=1;
				table.push(a[j]);
			}
		}
		while(!table.empty()){
			int x=table.top();
			vis[x]=0;
			ans[x]++;
			table.pop();
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
}
