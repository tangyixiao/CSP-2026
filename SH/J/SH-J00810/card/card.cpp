#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005];
int s[500005];
int b[500005];
stack<int> ans;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{ 
		for(int j=i;j<=n;j++)
		{
			if(s[a[j]]>=1)
			{
				while(ans.top()!=a[j])
				{
					s[ans.top()]--;
					ans.pop();
				}
			}
			else
			{
				s[a[j]]++;
				ans.push(a[j]);
			}
		}
		for(int j=1;j<=n;j++)
		{
			while(!ans.empty())
			{
				b[ans.top()]++;
				ans.pop();
			}
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout<<b[i]<<" ";
	}
	return 0;
}
