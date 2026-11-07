#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int t[300005],c[500005];
vector<int> v;
signed main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>c[i];
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=i;j<=n;j++)
		{
			bool f=0;
			for(int k=0;k<v.size();k++)
			{
				if(v[k]==c[j])
				{
					f=1;
					break;
				}
			}
			if(f)
			{
				while(1)
				{
					if(v[v.size()-1]==c[j])
					{
						v.pop_back();
						break;
					}
					v.pop_back();
				}
			}
			v.push_back(c[j]);
		}
		for(int j=0;j<v.size();j++)
		{
			t[v[j]]++;
		}
		v.clear();
	}
	for(int i=1;i<=m;i++)
	{
		cout<<t[i]<<' ';
	}
}
