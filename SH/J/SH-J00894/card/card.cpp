#include<bits/stdc++.h>
using namespace std;
int n,m;
const int N=5e5+5,M=3e5+5;
int a[N];
int ans[M];
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
		string s="";
		for(int j=i;j<=n;j++)
		{
			s+=(a[j]+'0');
			for(int si=0;si<s.size();si++)
			{
				for(int sj=1;sj<s.size();sj++)
				{
					if(s[si]==s[sj]&&si!=sj)
					{
						s.erase(si,sj-si);
					}
				}
			}
		}
		for(int j=0;j<s.size();j++)
		{
			ans[s[j]-'0']++;
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout<<ans[i]<<" ";
	}
}
