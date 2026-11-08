#include <bits/stdc++.h>
using namespace std;
int n,m,ans;
int a[200005];
vector<int> v;
int dfs(int x,int ch,int res){
	if(x==m) {
		v.push_back(res);
		cout<<res<<" ";
		return res;
	};
	for(int i=1;i<=n;i++){
		if(a[i]=ch) continue;
		res=a[i]&dfs(x+1,a[i],res);
	}
	return res;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		ans=dfs(1,0,a[i]);
	}
	int len=v.size();
	for(int i=0;i<len;i++){
		ans=max(ans,v[i]);
	}
	cout<<endl<<ans;
}
