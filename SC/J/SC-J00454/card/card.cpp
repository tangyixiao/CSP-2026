#include<iostream>
#include <cstdio> 
using namespace std;
int n,m;
int a[200005];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	if(m==1)
	{
		cout<<n;
	}
	else
	{
		int cnt1=0,cnt2=0;
		for(int i=1;i<=n;i++)
		{
			int x1=0,x2=0;
			for(int j=i;j<=n;j++)
			{
				if(a[i]==1&&!x1)
				{
					x1=i;
				}
				if(a[i]==2&&!x2)
				{
					x2=i;
				}
				if(a[i]==1&&x1)
				{
					x1=i;
					x2=i-1;
				}
				if(a[i]==2&&x2)
				{
					x2=i;
					x1=i-1;
				}
			}
			if(x1!=0)
			{
				cnt1++;
			}
			if(x2!=0)
			{
				cnt2++;
			}
		}
		cout<<cnt2<<" "<<cnt1;
	}
	return 0;
}