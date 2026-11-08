#include <bits/stdc++.h>
using namespace std;
long long n,m,a[500005],b[500005],c[300005],k;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for(int i=1;i<=n;i++)
	{
		cin >> a[i];
	}
	for(int i=1;i<=n;i++)
	{
		k=n;
		for(int j=i;j<=n;j++)
		{
			b[k] = a[j];
			for(int h=k;h<=n;h++)
			{
				if(b[h]==b[k])
				{
					b[h] = 0;
					for(int g=h;g<=n;g++)
					{
						b[g]=0;
					}
				}		
			}		
		}
		for(int h=1;h<=m;h++)
		{
			for(int i=1;i<=n;i++)
			{
				if(b[i]==h) c[h]++;break;	
			}	
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout << c[i] << " ";
	}
	return 0;
}
