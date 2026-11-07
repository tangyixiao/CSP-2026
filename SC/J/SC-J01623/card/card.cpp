#include<bits/stdc++.h>
using namespace std;
struct x
{
	int a,p;
}t[500005],s[500005];
int n,m,x[300005];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>t[i].a;
		t[i].p=i+1;
		s[i].a=t[i].a;
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			s[j].p=t[j].p;
		}
		for(int j=i;j<=n;j=s[j].p)
		{
			for(int r=i;r<j;r=s[r].p)
			{
				if(s[j].a==s[r].a)
				{
					s[r].p=s[j].p;
				}
			}
		}
		for(int j=i;j<=n;j=s[j].p)
		{
			x[s[j].a]++;
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout<<x[i]<<" ";
	}
	return 0;
}