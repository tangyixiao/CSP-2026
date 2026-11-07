#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[200003],num[33];
vector<int> h[33];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		h[31].push_back(a[i]);
	}
	ll ans=0,nm=31;
	for(int i=30;i>=0;i--){
		for(int x:h[nm])if(x&(1<<i))num[i]++,h[i].push_back(x);
		if(num[i]>=m)ans+=(1<<i),nm=i;
	}
	cout<<ans;
	return 0;
}
