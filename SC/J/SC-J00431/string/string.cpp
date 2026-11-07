#include<bits/stdc++.h>
using namespace std;
struct NODE
{
	long long v;
	char c;
}a[200010];
int main()
{
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i].v>>a[i].c;
	}
	int i=1,j=n;
	long long ans=0;
	while(i<j)
	{
		if(a[i].c==a[j].c)
		{
			if(a[i].v>a[j].v)
			{
				a[i].v-=a[j].v;
				j--;
			}
			else if(a[i].v==a[j].v)
			{
				i++;
				j--;
			}
			else
			{
				a[j].v-=a[i].v;
				i++;
			}
		}
		else
		{
			if(a[i].v>a[j].v)
			{
				a[i].v-=a[j].v;
				ans+=a[j].v;
				j--;
			}
			else if(a[i].v==a[j].v)
			{
				ans+=a[j].v;
				i++;
				j--;
			}
			else
			{
				a[j].v-=a[i].v;
				ans+=a[i].v;
				i++;
			}
		}
	}
	cout<<ans;
    return 0;
}