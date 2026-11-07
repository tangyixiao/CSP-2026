#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m;
int a[(int)2e5+10];
int cnt[(int)2e5+10];
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		for(int j=32;j>=0;j--){
			if(a[i]&(1<<j))cnt[j]++;
		}
	}
	vector<int>g;
	int ans=0;
	for(int i=1;i<=n;i++)g.push_back(i);
	for(int i=32;i>=0;i--){
		vector<int>g2;
		for(int j=0;j<g.size();j++){
			if(a[g[j]]&(1ll<<i)){
			//	cout<<g[j]<<' '<<a[g[j]]<<' '<<i<<'\n';
				g2.push_back(g[j]);
			}
		}
		if(g2.size()>=m){
			ans+=(1<<i);
			g.clear();
			for(int j=0;j<g2.size();j++)g.push_back(g2[j]);
		}
		//cout<<g2.size()<<'\n';
	}
	cout<<ans;
	return 0;
}