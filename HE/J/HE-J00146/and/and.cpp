#include<bits/stdc++.h>
#define int long long

using namespace std;
const int N=2e5+10;
const int LOG=31;

int n,m;
int a[N];
int ans;
vector<int> v;
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i],v.push_back(a[i]);
	sort(a+1,a+n+1);
	if(m==1){
		int mx=0;
		for(int i=1;i<=n;i++) mx=max(mx,a[i]);
		return cout<<mx,0;
	}
	for(int j=30;j>=0;j--){
		vector<int> v2;
		for(auto k:v){
			if((k>>j)&1) v2.push_back(k);
		}
		if((int)v2.size()>=m){
			v=v2;
			ans+=(1<<j);
		}
	}
	cout<<ans<<'\n';
	return 0;
}
/*
fc and5.out and5.ans
*/
