#include<bits/stdc++.h>
using namespace std;
using ll=long long;
	int n,m;
	ll a[200005];
ll ans=0;
bool cmp(const int& a,const int& b){
	return a>b;
}
void dfs(int depth,ll cur,int sle){
	if(depth>n){
		return;
	}
//		ans=max(ans,cur);
//cout<<depth<<" "<<cur<<endl;
	if(sle>=m){
		ans=max(ans,cur);
		return;
	}
	if(cur<ans) return;
	dfs(depth+1,cur,sle);
	dfs(depth+1,cur&a[depth],sle+1);
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	dfs(0,9223372036854775807,0);
	cout<<ans;
	return 0;
}
