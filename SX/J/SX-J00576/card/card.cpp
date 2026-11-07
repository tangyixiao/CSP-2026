#include<bits/stdc++.h>
using namespace std;
int t[300005],a[500005],ans[500005],l[300005];
vector<int> u;
int main() 
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=n;i>=1;i--)
	{
		t[a[i]]++;
		if(t[a[i]]==1)
		{
			u.push_back(a[i]),ans[a[i]]=i,l[a[i]]=i;
			continue;
		}
		vector<int> v;
		for(int j=0;j<u.size();j++)
		{
			if(l[u[j]]>=l[a[i]])
			{
				v.push_back(u[j]);
				continue;
			}
			ans[u[j]]-=i;
		}
		u=v;
	}
	for(int i=1;i<=m;i++)
	{
		cout<<ans[i]<<' ';
	}
	return 0;
}
