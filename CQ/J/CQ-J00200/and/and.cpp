#include<iostream>
using namespace std;

int n,m;
int a[200005];
int Max;
void dfs(int d,int an,int r){
	if(d==m){
		Max=max(Max,an);
	}
	for(int i=r+1;i<=n;i++){
		dfs(d+1,an&a[i],i); 
	}
}

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int k=30;
	int a=1;
	while(k--) a=(a<<1)+1;
	dfs(0,a,0);
	cout<<Max;
	return 0;
}
