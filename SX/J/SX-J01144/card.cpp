#include<bits/stdc++.h>
using namespace std;
long long n,m,a[1000000],b[1000000],c,d,e,f;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(a[i]==1)
		{
			e++;
		}
		else
		{
			f++;
		}
	}
	if(a[n]==1)
	{
		cout<<n<<" "<<f;
	}
	else
	{
		cout<<e<<" "<<n;
	}

	/*
	for(int i=1;i<=n;i++)
	{
		for(int j=i;j<=n;j++)
		{
			for(int k=1;k<=n;k++)
			{
				if(c==1)
				{
					for(int u=k;u<=n;u++)
					{
						b[u]==0
					}
				}
				if(b[k]==b[j])
				{
					c=1;
				}
			}
		}
	}*/
	return 0;
}