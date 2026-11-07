#include<bits/stdc++.h>
using namespace std;
int n,m,b[500005],a[500005],vis[500005];
vector<int> v;
void s1()
{
	for(int i = 1;i <= n;i++)
	{
		memset(vis,0,sizeof(vis));
		v.clear();
		for(int j = i;j <= n;j++)
		{
			if(vis[a[j]] != 0)
			{
				for(int k = 1;k <= j - vis[a[j]] - 1;k++)v.pop_back();
				vis[a[j]] = j - i + 1;
				continue;
			}
			vis[a[j]] = j - i + 1;
			v.push_back(a[j]);
			//cout << i  << " " << j << " \n";
		}
		for(auto k:v)b[k]++;
	}
	for(int i = 1;i <= m;i++)
	{
		cout << b[i] << " ";
	}
} 
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	bool fl = 1;
	for(int i = 1;i <= n;i++)
	{
		cin >> a[i];
		if(a[i - 1] > a[i])fl = 0;
	}
	if(n <= 5)
	{
		s1();
		return 0;
	}
	else if(fl)
	{
		long long ans = 0;
		for(int i = 1;i <= n;i++)
		{
			b[a[i]]++;
		}
		for(int i = 1;i <= m;i++)
		{
			ans += b[i];
			cout << ans << " ";
		}
		return 0;
	}
	return 0;
}
