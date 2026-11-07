#include<bits/stdc++.h>
using namespace std;
int a[500001];
int b[500001];
int c[300001];
int e[500001];
int main()
{
	freopen("card.in","r",stdin);
	 freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		e[i]=a[i];
	}
    for(int i=0;i<n;i++)
    {
    	for(int j=i;j<n;j++)
    	{
    		for(int k=i;k<j;k++)
    		{
    			if(e[k]==a[j])
    			{
    				for(int l=k;l<j;l++)
    				{
    					b[l]=1;
    					e[l]=0;
					}
					break;
				}
			}
		}
		for(int p=i;p<n;p++)
		{
			if(b[p]==0)
			{
				c[a[p]]++;
			}else{
				b[p]=0;
			   e[p]=a[p];	
			}
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout<<c[i]<<" ";
	}
	return 0;
}
