#include<bits/stdc++.h>
using namespace std;
#define int long long 
int n,a[100005],ans;
int cang1,cang2;
char c[100005];
signed main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>c[i];
	}
	int ll=1;
	int rr=n;
	while(ll<rr)
	{
		cang1=a[ll];
		cang2=a[rr];
		if(cang1>=cang2)
		{
			if(c[ll]!=c[rr])
			{
				ans+=cang2;
			    rr--;
			    a[ll]-=cang2;
			}
			else
			{
				rr--;
				a[ll]-=cang2;
			}
		}
		else
		{
			if(c[ll]!=c[rr])
			{
				ans+=cang1;
				ll++;
				a[rr]-=cang1;
			}
			else
			{
				ll++;
				a[rr]-=cang1;
			}
		}
	}
	cout <<ans;
	return 0;
}