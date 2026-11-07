#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,rn,m;
	cin>>n>>m;
	rn=n;
	int p[n],d[n],a[n];
	for(int i=0;i<n;i++)
		a[i]=0;
	for(int i=0;i<n;i++)
		cin>>p[i];
	for(int s=0;s<n;s++)
	{
		for(int i=s;i<n;i++)
		{
			for(int j=0;j<n-s+1;j++)
			{
				for(int f=0;f<j;f++)
				{
					if(d[f]=p[j])
					{
						for(int g=f;g<j;g++)
						{
							for(int x=0;x<n;x++)
							{
								if(p[x]=d[g])
								{
									p[x]=0;
									int y=x+1;
									while(y<n)
									{
										p[y-1]=p[y];
										y++;
									}
									p[n-1]=0;
									n--;
								}
							}
							d[g]=0;
						}
						d[f]=p[j];
					}
					else d[f]=p[j];
				}
			}
		}
		int r;
		while(d[r]!=0)
		{
			if(d[r]==s+1)
			{
				a[s]++;
			}
		}
		n=rn;
		for(int q=0;q<n;q++)
			d[q]=0;
	}
	for(int e=0;e<rn;e++)
	{
		cout<<a[e]<<' ';
	}
	return 0;
 }