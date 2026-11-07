#include<bits/stdc++.h>
#define var long long
using namespace std;
const var N = 2e5+10;
var n,m;
vector<var> g[2];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	cin>>n>>m;
	for(var i=1;i<=n;i++){
		var a; cin>>a;
		g[0].push_back(a);
	}
	var p=0,ans=0;
	for(var i=30;i>=0;i--){
		g[p^1].clear();
		for(var j=0;j<g[p].size();j++){
			if(((g[p][j]>>i)&1)==1){
				g[p^1].push_back(g[p][j]);
			}
		}
		if(g[p^1].size()>=m) {
			p^=1;
			ans+=(1ll<<i);
		}
	}
	cout<<ans<<endl;
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
