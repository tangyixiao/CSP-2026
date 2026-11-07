#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,m;
vector<int> v,vv;
signed main(){
	cin.tie(0)->sync_with_stdio(0);
	cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		int x;cin>>x;
		v.push_back(x);
	}
	int ans=0;
	for(int i=29;i>=0;i--){
		vv.clear();
		for(int j:v){
			if(j&(1<<i))vv.push_back(j);
		}
		if(vv.size()>=m){
			ans|=1<<i;
			v.swap(vv);
		}
	}
	cout<<ans;
	return 0;
}
