#include<bits/stdc++.h>
using namespace std;
typedef long long lint;
lint a[200010],maxv=0;
lint n,m;
vector<lint> v;
void dfs(lint x,lint now){
	if(v.size()==m){
		maxv=max(maxv,now); 
		return;
	}
	for(lint i=x+1;i<=n-m+v.size()+1;i++){
		if(now&a[i]<=maxv)continue;
		v.push_back(a[i]);
		dfs(i,now&a[i]);
		v.pop_back();
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(lint i=1;i<=n;i++)cin>>a[i];
	dfs(0,INT_MAX);
	cout<<maxv;
	return 0;
}
