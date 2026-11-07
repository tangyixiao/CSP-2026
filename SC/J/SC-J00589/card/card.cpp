#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    long long p,q,st,en;
    cin>>p>>q;
    int a[p+3],b[p+1];
    long long c[p+5];
    for(int i=1;i<=p;i++)
    {
    	cin>>a[i];
    	c[i]=0;
	}
	st=1;
	en=1;
	for(int l=1;l<=p;l++)
	{
		for(int m=l;m<=p;m++)
		{
			b[en]=a[m];
			en++;
			for(int i=st;i<m;i++)
			{
				if(a[m]==b[i])
				{
					if(i==st)
					{
					st=en-1;
					break;
					}
				else
				{
					for(int k=i;k<=en-2;k++)
					{
						b[k]=0;
					}
					break;
				}
				}
			}
		}
		for(int i=st;i<=en-1;i++)
		{
			c[b[i]]++;
		}
		st=1;
		en=1;
	}
	for(int i=1;i<=q;i++)
	{
		cout<<c[i]<<" ";
	}
    fclose(stdin);
    fclose(stdout);
    return 0;
 } 