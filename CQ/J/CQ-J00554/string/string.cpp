#include<bits/stdc++.h>
using namespace std;
struct node
{
	int len;
	char c;
}a[200005];
int n;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	for (int i=1;i<=n;i++)
	{
		cin>>a[i].len>>a[i].c;
	}
	int i=1,j=n;
	long long ans=0;
	while (i<j)
	{
		if (a[i].len==a[j].len)
		{
			if (a[i].c!=a[j].c)
			{
				ans+=a[i].len;
			}
			i++;
			j--;
		}
		else
		{
			if (a[i].len>a[j].len)
			{
				if (a[i].c!=a[j].c)
				{
					ans+=a[j].len;
				}
				a[i].len-=a[j].len;
				j--;
			}
			else
			{
				if (a[i].c!=a[j].c)
				{
					ans+=a[i].len;
				}
				a[j].len-=a[i].len;
				i++;
			}
		}
	}
	cout<<ans;
	return 0;
}
