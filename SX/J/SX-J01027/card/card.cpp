#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int a[300005];
	bool b = true;
	int n,m;
	cin >> n >> m;
	for (int i=1;i<=n;i++)
	{
		cin >> a[i];
		if (a[i]!=a[i-1]&&i!=1)
			b = false;
	}
	if (b)
	{
		for (int i=1;i<=m;i++)
		{
			if (a[i]==i)
				cout << n << " ";
			else
				cout << "0 ";
		}
	}
	else
	{
		unordered_map<int,int> mp;
		vector<int> v(n+1,0);
		for (int i=1;i<=n;i++)
		{
			for (int j=i;j<=n;j++)
			{
				if (mp.count(a[j]))
					mp.clear();
				mp.insert({a[j],1});
			}
			for (auto h: mp)
				v[h.first]++;
			mp.clear();
		}
		for (int i=1;i<=m;i++)
			cout << v[i] << " ";
	}
	return 0;
}