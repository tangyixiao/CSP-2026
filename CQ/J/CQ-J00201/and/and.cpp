#include<bits/stdc++.h>
using namespace std;
#define int long long
//luogu id:afewdgre
int n,m,a[200005],ans;
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("and.in","r",stdin);	
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	vector<int> v;
	for(int i=29;i>=0;i--){
		if(v.size()==0){
			for(int j=1;j<=n;j++){
				if(a[j]&(1<<i)) v.push_back(j);
			}
			if((int)v.size()<m) v.clear();
			else ans+=(1<<i);
		}
		else{
			vector<int> g;
			for(int j=0;j<(int)v.size();j++){
				if(a[v[j]]&(1<<i)) g.push_back(v[j]);
			}
			if((int)g.size()>=m){
				ans+=(1<<i);
				v=g;
			}
		}
	}
	cout<<ans;
}

