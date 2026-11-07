#include<bits/stdc++.h>
using namespace std;

vector<int>v[32];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin >> n >> m;
	for (int i = 1;i <= n;i++) 
	{
		int a;
		cin >> a;
		v[30].push_back(a);
	}
	for (int i = 30;i >= 1;i--)
	{
		sort(v[i].begin(),v[i].end());
		int num = 0;
		for (int j = v[i].size()-m;j < v[i].size();j++) num += (v[i][j] & (1 << i)) != 0;
		if (num < m)
		{
			for (int j = 0;j < v[i].size();j++) v[i-1].push_back((v[i][j] | (1 << i)) - (1 << i));
		}
		else 
		{
			for (int j = 0;j < v[i].size();j++)
			{
				if (v[i][j] & (1 << i)) v[i-1].push_back(v[i][j]);
			}
		}
	}
	sort(v[0].begin(),v[0].end());
	int mx = (1 << 30) - 1;
	for (int i = v[0].size()-m;i < v[0].size();i++) mx &= v[0][i];
	cout << mx;
	return 0;
}
