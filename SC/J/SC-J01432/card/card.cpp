#include<bits/stdc++.h>
using namespace std;
long long a[500005],cnt[300005],weizhi[300005];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=m+1;i++)
	{
		memset(weizhi,0,sizeof(weizhi));
		stack<long long>s;
		for(int j=i;j<=n;j++)
		{
			if(weizhi[a[j]]!=0)
			{
				for(int k=weizhi[a[j]]+1;k<=s.size();k++)
				{
					weizhi[s.top()]=0;
					s.pop();
				}
			}
			else
			{
				s.push(a[j]);
				weizhi[a[j]]=s.size();
			}
		}
		for(int j=s.size();j>=1;j--)
		{
			cnt[s.top()]++;
			s.pop();
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout<<cnt[i]<<" ";
	}
	return 0;
} 