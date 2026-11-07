#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("card.in","r",stdin);	
    freopen("card.out","w",stdout);
    int a,b,c[200010],g[200010];
    cin>>a>>b;
    for (int i=1;i<=a;i++)
    {
    	cin>>c[i];
	}
	for (int i=1;i<=a;i++)
	{
		for (int f=i;f<=a;f++)
		{
			g[c[f]]++;
		}
		for (int j=i;j<=a;j++)
		{
			for (int d=i;d<j;d++)
			{
				if (c[d]==c[j])
				{
					for (int e=d;e<j;e++)
					{
						g[c[e]]--;
					}
					break;
				}
			}
		}

	}
	for (int i=1;i<=b;i++)
	{
		cout<<g[i]<<" ";
	}
 } 
