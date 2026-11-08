#include <bits/stdc++.h>
#define ll long long
#define mod 998244353
using namespace std;
int a[200001];
vector<int> b[31];
vector<int> c;
void change(int x)
{
	c=b[x];
	for (int i=0;i<=30;i++)b[i].clear();
	for (int i=0;i<c.size();i++)for (int j=0;j<=30;j++)if (a[c[i]]&(1<<j))b[j].push_back(c[i]);
}
int main ()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	int n,m;
	cin>>n>>m;
	for (int i=1;i<=n;i++)
	{
		cin>>a[i];
		for (int j=0;j<=30;j++)if (a[i]&(1<<j))b[j].push_back(i);
	}
	int maxb=30,flag=1,ans=0;
	while (flag)
	{
		flag=0;
		for (int i=maxb;i>=0;i--)
		{
			if (b[i].size()>=m)
			{
//				cout<<i<<'\n';
				maxb=i-1;
				change(i);
				flag=1;
				ans+=(1<<i);
				break;
			}
		}
	}
	cout<<ans;
	return 0;
}
