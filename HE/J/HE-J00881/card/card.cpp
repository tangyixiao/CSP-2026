#include<bits/stdc++.h>
using namespace std;
int n;
int m;
int a[5010];
int c[3010];
int t[5010];
int k;
int t1;
int r=0;
bool flag;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		r=0;
		for(int j=i;j<=n;j++)
		{
			k=a[j];
			for(int l=1;l<=r;l++)
			{
				if(t[l]==k)
				{
					flag=1;
					t1=l;
					break;
				}
		}
			if(flag==0)
			{
				r++;
				t[r]=k;
			}else
			{
				r=t1-1;
				r++;
				t[r]=k;
			}
			flag=0;
		}
		for(int j=1;j<=r;j++)
		{
			c[t[j]]++;
			
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout<<c[i]<<" ";
	}
	return 0;
 } 
