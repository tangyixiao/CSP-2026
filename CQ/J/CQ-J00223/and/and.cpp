#include<bits/stdc++.h> 
using namespace std;
#define int long long
const int N=5e5+10;
int n, m, a[N], k;
//B
vector<int>v;
vector<int>tv;
int ans;

signed main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	
	cin>>n>>m;
	for(int i=1; i<=n; i++) cin>>a[i];
	
	for(int i=1; i<=n; i++) v.push_back(a[i]);
	for(int i=30; i>=0; i--)
	{
		tv.clear();
		for(int j=0; j<v.size(); j++)
		{
			if(v[j]&(1ll<<i)) tv.push_back(v[j]);
		}
		if(tv.size()>=m) ans+=(1ll<<i), v=tv;
	}
	cout<<ans<<endl;
	
	
	
	
	
	
	return 0;
}

