#include<bits/stdc++.h>
using namespace std;
long long a[500005];
int n,m;
bool l=0;
map<long long ,long long> maap;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		maap[a[i]]=0;
	}
	for(int i=1;i<=n;i++)
	{
		vector<long long> q;
		map<long long,long long>mp;
		for(int j=i;j<=n;j++)
		{
			if(mp[a[j]]==1)
			{
				if(q[q.size()-1]==a[j]&&l==0)
				{
					mp[q[q.size()-1]]=0;
					q.pop_back();
					l=1;
				}
				else if(q[q.size()-1]!=a[j]&&l==0)
				{
					mp[q[q.size()-1]]=0;
					q.pop_back();
				}
			}
			q.push_back(a[j]);
			mp[a[j]]=1;
		}
		map<long long ,long long> mmm;
		for(int j=1;j<=n;j++)
		{
			if(mp[a[j]]==1&&mmm[a[j]]==0)
			{
				maap[a[j]]++;
				mmm[a[j]]=1;
			}
		}
	}
	map<long long ,long long> mm;
	for(int i=1;i<=n;i++)
	{
		if(mm[a[i]]==0)
		{
			cout<<maap[a[i]]<<" ";
			mm[a[i]]=1;
		}
	}
	return 0;
}
