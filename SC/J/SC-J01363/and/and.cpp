#include<bits/stdc++.h>
using namespace std;
unsigned long long a[200005],r;long long maxx=-1;bool vis[200005];
int n,m;
void max_dfs(int step){
	if(step==m){
		if(r>maxx) maxx=r;
		return;
	}
	for(int i=0;i<n;i++)
		if(!vis[i]){
			if(step==0) r=a[i];
			else r=r&a[i];
			vis[i]=1;
			max_dfs(step+1);
			vis[i]=0;
		}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++)
		cin>>a[i];
	max_dfs(0);
	cout<<maxx;
	return 0;
}