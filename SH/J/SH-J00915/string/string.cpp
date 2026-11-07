#include<bits/stdc++.h>
using namespace std;
#define int long long
int n;
int ans;
bool flag;
int cnt;
struct node
{
	int x;
	char c;
}a[200005];
struct nodee
{
	int y;
	char b;
}e[200005];
signed main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
    	cin>>a[i].x>>a[i].c;
	}
	for(int i=1;i<=n-1;i++)
    {
    	if(a[i].c!=a[i+1].c)
    	{
    		flag=1;
    		break;
		}
	}
	if(flag==0)
	{
		cout<<0;
		return 0;
	}
	int m=0;
    for(int i=1;i<=n/2;i++)
    {
    	while(a[i].x!=0)
    	if(a[i].x==a[n-m].x)
    	{
    		if(a[i].c!=a[n-m].c)
    		{
    			ans+=a[i].x;
    			a[i].x=0;
    			m++;
			}
			else
			{
				a[i].x=0;
				m++;
			}
		}
		else if(a[i].x>a[n-m].x)
		{
			if(a[i].c!=a[n-m].c)
			{
				ans+=a[n-m].x;
				a[i].x-=a[n-m].x;
				m++;
			}
			else
			{
				a[i].x-=a[n-m].x;
				m++;
			}
		}
		else if(a[i].x<a[n-m].x)
		{
			if(a[i].c!=a[n-m].c)
			{
				ans+=a[i].x;
				a[n-m].x-=a[i].x;
				a[i].x=0;
			}
			else
			{
				a[n-m].x-=a[i].x;
				a[i].x=0;
			}
		}
	}
	cout<<ans;
	return 0;
}
