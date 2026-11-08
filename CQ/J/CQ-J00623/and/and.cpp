#include<bits/stdc++.h>
using namespace std;
struct node{
	int x;
	int id;
}a[200005];
string s[200005];
bool f[200005];
int b[10005];
int n,m;
int ans=INT_MIN;
void dfs(int sum,int zhi,int last){
	if(sum==m){
		ans=max(ans,zhi);
		return ;
	}
	int p=0,o=0;
	for(int i=last+1;i<=n;i++){
		if(sum==0){
			dfs(sum+1,a[i].x,i);
		}else{
		    p=o;
		    o=(zhi&a[i].x);
		    dfs(sum+1,o,i);
		    o=p;	
		}
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	int o=INT_MIN;
	int o1=0;
	for(int i=1;i<=n;i++){
		cin>>a[i].x;
		a[i].id=i;
		o=max(o,a[i].x);
		o1=(o1&a[i].x);
	}
	if(m==1){
		cout<<o;
		return 0;
	}
	if(m==n){
		cout<<o1;
		return 0;
	}
	dfs(0,0,0);
	cout<<ans;
	return 0;
}
