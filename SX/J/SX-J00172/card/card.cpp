#include <bits/stdc++.h>

#define ll long long
using namespace std;
const int N=500005,M=300005;
int n,m,a[N],cnt[M],sum[M];
set<int> st;

int main()
{
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin>>n>>m;
	for(int i=1; i<=n; i++)
	{
		cin>>a[i];
	}
	for(int i=1; i<=n; i++)
	{
		vector<int> mynow;
		for(int j=i; j<=n; j++)
		{
			mynow.push_back(a[j]);
			cnt[a[j]]++;
			if(cnt[a[j]]!=0)
			{
				mynow.clear();
				mynow.push_back(a[j]);
			}
		}
		for(int p:mynow)
		{
			sum[p]++;
		}

		mynow.clear();
		fill(cnt+1,cnt+m+1,0);
	}
	for(int i=1; i<=m; i++)
	{
		cout<<sum[i]<<" ";
	}
	return 0;
}
