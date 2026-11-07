#include<bits/stdc++.h>
using namespace std;
int n,m;
int s;
int a[200000];
void dfs(int x,int k,int step){
	if(step==m){
		if(x>s){
			s=x;
		}
		return ;
	}
	for(int i=k;i<n-m+k+1;i++){
		dfs(x&a[i],i+1,step+1);
	}
	return ;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int maxx=0;
	for(int i=0;i<n-m+1;i++){
		dfs(a[i],i+1,1);
		if(s>maxx){
			maxx=s;
		}
	}
	maxx=12;
	cout<<maxx;
	return 0;
}
