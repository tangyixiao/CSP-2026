#include<bits/stdc++.h>//注意开不开long long
#include<vector>
#define int long long
using namespace std;
const int N=5e5+5,M=3e5+5;
int n,m,idx[M],a[N],ans[M];
vector<int> t,e;
//vector<int> t[M];
signed main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++)
	{
		for(int j=i;j<=n;j++)
		{
			for(auto g:t) 
			{
				if(g==a[j]) break;
				e.push_back(g);
			}
			e.push_back(a[j]);
			t=e;
			e.clear();
		}
		for(auto g:t) ans[g]++;
		t.clear(),e.clear();
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
	return 0;
}

