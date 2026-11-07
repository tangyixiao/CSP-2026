#include<bits/stdc++.h>
using namespace std;
int n,m;
int a1[500005];
int b[300005]; 
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		cin>>a1[i];
	}
	int tmp=n;
	int cnt=1;
	int x=0;
	while(tmp--)
	{
		int p1,p2;
		bool flag=false;
		
		int a[500005]={0};
		for(int i=x;i<n;i++)
		{
			a[i]=a1[i];
		}
		for(int i=x;i<n;i++)
		{
			if(a[i]==cnt)
			{
				p1=i;
				flag=true;
			}
			for(int j=i+1;j<n;j++)
			{
				if(flag&&a[j]==cnt)
				{
					p2=j;
					for(int z=p1;z<p2;z++)
					{
						a[z]=0;
					}
				}
			}
		}
		cnt++;
		x++;
		for(int i=0;i<n;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<endl;
		for(int i=1;i<=n;i++)
		{
			b[a[i]]++;
		}
			
	}
	for(int i=1;i<=m;i++)
	{
		cout<<b[i]<<" ";
	} 
	return 0;
}
