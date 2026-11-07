#include<bits/stdc++.h>
using namespace std;
vector<int> a[35];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int ans=0;
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		int x;
		cin>>x;
		a[31].push_back(x);
	}
	for(int i=30;i>=0;i--)
	{
		int t=0;
		for(int j=0;j<a[i+1].size();j++)
		{
			int y=a[i+1][j];
			if(y&(1<<i)) t++;
		}
		if(t>=m)
		{
			ans+=1<<i;
			for(int j=0;j<a[i+1].size();j++)
			{
				int y=a[i+1][j];
				if(y&(1<<i)) a[i].push_back(y);
			}
		}
		else
		{
			for(int j=0;j<a[i+1].size();j++)
			{
				int y=a[i+1][j];
				a[i].push_back(y);
			}
		}
	}
	cout<<ans;
	return 0;
}
