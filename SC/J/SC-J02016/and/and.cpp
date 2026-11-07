#include<iostream>
using namespace std;
int a[200005],summax;
void dfs(int i,int j,int sum,int n,int m){
	if(j==m){
		summax=max(summax,sum);
		return;
	}
	if(i>=n)return;
	dfs(i+1,j,sum,n,m);
	dfs(i+1,j+1,(sum&a[i]),n,m);
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	dfs(0,0,INT_MAX,n,m);
	cout<<summax;
	return 0;
}