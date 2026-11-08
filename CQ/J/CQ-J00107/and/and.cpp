#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,a[200005],ans;
vector<int> f,tmp;
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		f.emplace_back(a[i]);
	}
	for(int i=31;i>=0;i--){
		tmp.clear();
		for(auto x:f){
			if(x&(1ll<<i)) tmp.emplace_back(x);
		}
		if(tmp.size()>=m){
			ans+=(1ll<<i);
			f=tmp;
		}
	}
	cout<<ans;
	return 0;
} 
