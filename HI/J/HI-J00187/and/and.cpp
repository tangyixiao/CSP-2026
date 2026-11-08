#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[1000005],b[1000005];
bool vis[1000005];
int x;

void dfs(int z){
	
	if(z==m+1){
//		for(int i=1;i<=m;i++){
//			cout<<b[i]<<" ";
//		}
//		cout<<endl;
		for(int i=2;i<=m;i++){
			b[i]=b[i] & b[i-1];
//			cout<<"b:"<<b[i]<<" ";
//			vis[b[i]]=false;
			
		}
		x=max(x,b[m]);
//		cout<<"x:"<<x<<"  ";
		return;
	}
	
	for(int i=1;i<=n;i++){
		if(vis[a[i]]==false){
			b[z]=a[i];
			vis[a[i]]=true;
			dfs(z+1);
			vis[a[i]]=false;
		}
			
	}
}	
	
	

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	dfs(1);
	cout<<x;
	return 0;
}
