#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[200005];
int vis[200005]={0};

int ans=0;
void dfs(int k,int num,int v){//第k个元素，已经选了num个元素，总和为v
	if(k>n||k<1||vis[k]==1)return;
	if(num==m){
		ans=max(ans,v);
		return;
	}
	
	vis[k]=1;
	//选 
	dfs(k+1,num+1,v&a[k+1]);
	dfs(k-1,num+1,v&a[k-1]);
	
	
	//不选
	dfs(k+1,num,v);
	dfs(k-1,num,v);
	vis[k]=0;
}

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int number=0;
	for(int i=1;i<=n;i++){
		ans=0;
		for(int j=1;j<=n;j++)vis[j]=0;
		dfs(i,1,a[i]);
		number=max(number,ans);
	}
	cout<<number;
	return 0;
} 