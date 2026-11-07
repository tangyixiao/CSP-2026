#include<bits/stdc++.h>
using namespace std;
int n,m;
struct Num{
	int las;
	int val;
}num[300005];
bool cmp(Num x,Num y)
{
	return x.las>y.las;
}
int a[500005];
vector<int> cnt[300005];
int ci[300005];
int ans[300005];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) 
	{
		cin>>a[i];
		ci[a[i]]++;
		num[a[i]].las=i;
		num[a[i]].val=a[i];
	}
	sort(num+1,num+m+1,cmp);
	for(int i=1;i<=m;i++)
	{
		int r=num[i].las,v=num[i].val;
		int nxt=a[r+1];
		cnt[v].push_back(v);
		int t=cnt[nxt].size();
		for(int j=0;j<t;j++)
		{
			cnt[v].push_back(cnt[nxt][j]);
		}
	}
	for(int i=1;i<=m;i++)
	{
		int t=cnt[i].size();
		for(int j=0;j<t;j++)
		{
			int pre=cnt[i][j];
			ans[pre]+=ci[i];
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout<<ans[i]<<" ";
	}
	return 0;
}
