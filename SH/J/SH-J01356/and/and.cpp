#include<bits/stdc++.h>
using namespace std;
string s[200005];
long long w=0;
long long n,m,a[200005];
void dfs(int lev,int sum,int cut){
	if(lev==m){
		if(sum>w)w=sum;
		return;
	}
	for(int i=cut+1;i<=n;i++){
		dfs(lev+1,(sum & a[i]),i);
	}
	return ;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		dfs(1,a[i],i);
	}
	cout<<w;
	return 0; 
}
