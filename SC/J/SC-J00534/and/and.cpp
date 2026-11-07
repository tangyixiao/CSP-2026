#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
vector<int> g[2];
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		int x;
		cin>>x;
		g[0].push_back(x);
	}
	int ans=0,cs=1;
	for(int i=29;i>=0;i--){
		g[1].clear();
		for(auto c:g[0]){
			//cout<<c<<" ";
			if((1<<i) & c){
				g[1].push_back(c);
			}
		}
		//cout<<endl;
		if(g[1].size()>=m){
			ans+=(1<<i);
			g[0]=g[1];
		}
	}
	cout<<ans;
	return 0;
}
/*
4 2
3 15 12 12
*/