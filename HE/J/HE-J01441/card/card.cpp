#include<bits/stdc++.h>
using namespace std;
int a[500010];
int vis[500010];
int last[500010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		
	}
	for(int i=n;i>=1;i--){
		if(vis[a[i]]==0){
			last[a[i]]=i;
			vis[a[i]]=1;
		}else{
			continue;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<last[i]<<" ";
	}
	return 0;
}
