#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n,m;
	cin>>n>>m;
	vector<int> a(n+5);
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	vector<int> ans(m+5);
	for(int i=1;i<=n;i++)
	{
		vector<int> v;
		vector<int> s(m+5,-1);
		for(int j=i;j<=n;j++)
		{
			if(s[a[j]]>=0)
			{
				for(int k=v.size()-1;k>s[a[j]];k--)
				{
					s[v[k]]=-1;
					v.pop_back();
				}
			}
			else
			{
				s[a[j]]=v.size();
				v.push_back(a[j]);
			}
		}
		for(int j=1;j<=m;j++)
		{
			ans[j]+=s[j]!=-1;
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout<<ans[i]<<" ";
	}
	return 0;
}