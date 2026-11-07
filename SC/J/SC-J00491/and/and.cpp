#include<bits/stdc++.h> 
#define int long long
using namespace std;
const int N=1e5+42;
int s[N];
int n,m;
int sum;
int mx;
void dfs(int step,int k,int val){
	if(k>n){
		return ;
	}
	if(step==m){
		mx=max(mx,val);
		return ;
	}
	dfs(step+1,k+1,s[k+1]&val);
	dfs(step,k+1,val);
	return ;
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>s[i];
	}
	for(int i=1;i<=n-m+1;i++){
		dfs(1,i,s[i]);
	}
	cout<<mx;
	return 0;
}