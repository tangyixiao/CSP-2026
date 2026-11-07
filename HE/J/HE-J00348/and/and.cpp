#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int N = 2e5+10;
int a[N];
int n,m;
int ans=0;
void dfs(int s,int l,int key){
//	cout<<s<<" "<<l<<endl;
	if(l==m){
		ans=max(ans,key);
		return;
	}
	for(int i=s+1;i<=n;i++){
		dfs(i,l+1,key&a[i]);
//		cout<<"*"<<endl;
	}
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		dfs(i,1,a[i]);
	}
	cout<<ans;
	return 0;
}
