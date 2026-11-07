#include<bits/stdc++.h>
using namespace std;
long long n,ans,num[2000020],x,y;
char zf[2000020];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for (int i=1;i<=n;i++)
	{
		cin>>num[i]>>zf[i];
	}
	x=1;
	y=n;
	for (int i=1;i<=n;i++)
	{
		if (zf[x] != zf[y])
		{
			if (num[y]>num[x])
			{
				ans+=num[x];
				num[y]-=num[x];
				x++;
			}
			else
			{
				ans+=num[y];
				num[x]-=num[y];
				y--;
			}
		}
		else
		{
			if (num[x]>num[y])
			{
				num[x]-=num[y];
				y--;
			}
			else
			{
				num[y]-=num[x];
				x++;
			}
		}
		if (x>=y)
		{
			break;
		}
		
	}
	cout<<ans;
	return 0;
}
