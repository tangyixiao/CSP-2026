#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005],cnt[200005];
bool cmp(int x,int y)
{
	return x>y;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=30;i>=0;i--)
	{
		vector<int> v;
		for(int j=1;j<=n;j++)
		{
			if(cnt[j]==1) continue;
			if((1<<i)&a[j])
			{
				v.push_back(j);
			}
		}
		if(v.size()>=m)
		{
			for(int j=1;j<=n;j++)
			{
				if(cnt[j]==1) continue;
				if(((1<<i)&a[j])==0)
				{
					cnt[j]=1;
				}
			}
		}
	}
	vector<int> s;
	for(int i=1;i<=n;i++)
	{
		if(cnt[i]==0) s.push_back(a[i]);
	}
	sort(s.begin(),s.end(),cmp);
	if(s.size())
	{
		int ans=s[0];
		for(int i=1;i<s.size();i++)
		{
			ans=(ans&s[i]);
		}
		cout<<ans;
		return 0;
	}
	cout<<0;
	return 0;
}