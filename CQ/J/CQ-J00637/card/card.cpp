#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500005];
int ans[300005];
bool vis[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	stack<int> cun;
	for(int k=1;k<=n;k++){
	for(int i=k;i<=n;i++){
		if(vis[a[i]]==0){
			cun.push(a[i]);
			vis[a[i]]=1;
		}
		else{
			while(cun.top()!=a[i]){
				vis[cun.top()]=0;
				cun.pop();
			}
		}
	}
	for(int j=1;j<=m;j++){
		if(vis[j]){
			vis[j]=0;
			ans[j]++;
		}
	}
	while(!cun.empty())cun.pop();
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}
