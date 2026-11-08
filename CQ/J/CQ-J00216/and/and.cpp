#include<bits/stdc++.h>//注意开不开long long
#include<vector>
#define int long long
using namespace std;
const int N=2e5+5;
int n,m,a[N],dp[N],mi[35],ans;
vector<int> t,e;
signed main()
{
	freopen("and.in","r",stdin);
	freopen("ans.out","w",stdout);
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	cin>>n>>m;
	mi[0]=1ll;
	for(int i=1;i<=n;i++) cin>>a[i],t.push_back(i);
	for(int i=1;i<=30;i++) mi[i]=mi[i-1]*2ll;
	for(int i=30;i>=0;i--)
	{
		int cnt=0;
		for(auto g:t)
			if((a[g]&mi[i])==mi[i]) cnt++;
		if(cnt<m) continue;
		ans+=mi[i];
		for(auto g:t)
			if((a[g]&mi[i])==mi[i]) e.push_back(g);
		t.clear();
		for(auto g:e) t.push_back(g);
		e.clear();
	}
	cout<<ans;
	return 0;
}

