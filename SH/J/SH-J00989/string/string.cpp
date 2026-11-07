#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	vector<pair<long long,char>> v;
	int x;
	long long s=0;
	char y;
	for (int i=1;i<=n;i++)
	{
		cin>>x>>y;
		v.push_back({x,y});
	}
	for (int i=0,j=n-1;i<n,j>=0;)
	{
		if (v[i].second==v[j].second)
		{
			if (v[i].first>v[j].first)
			{
				v[i].first-=v[j].first;
				v[j].first=0;
				j--;
				continue;
			}
			else
			{
				v[j].first-=v[i].first;
				v[i].first=0;
				i++;
				continue;
			}
		}
		else
		{
			if (v[i].first>v[j].first)
			{
				s+=v[j].first;
				v[i].first-=v[j].first;
				v[j].first=0;
				j--;
				continue;
			}
			else
			{
				s+=v[i].first;
				v[j].first-=v[i].first;
				v[i].first=0;
				i++;
				continue;
			}
		}
	}
	cout<<s;
	return 0;
}
