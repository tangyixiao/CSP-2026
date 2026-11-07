#include <bits/stdc++.h>
using namespace std;

unsigned char  a[100000];
unsigned char  b[100000];

int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n=0,l=0,sum=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int m=0;
		char s;
		cin>>m>>s;
		l+=m;
		if(i==1)
		{
			for(int j=1;j<=m;j++)
				a[j]=s;
		}
		else
		{
			for(int j=l-m;j<=l;j++)
				a[j]=s;	
		}
		
	}
	
	
	if(l%2==0)
	{
		for(int i=1;i<=l/2;i++)
		{
			for(int j=l;j>=l/2;j--)
			{
				int id=i;
				b[i]=a[id];
				b[j]=a[id];	
				
			}
		}
	}
	else
	{
		for(int i=1;i<=l/2+1;i++)
		{
			for(int j=l;j>=l/2+1;j--)
			{
				int id=i;
				b[i]=a[id];
				b[j]=a[id];	
				
			}
		}
	}
	for(int i=1;i<=l;i++)
	{
		if(a[i]!=b[i])
			sum++;
	}
	
	cout<<sum;
	
	
	
	fclose(stdin);
	fclose(stdout);	
	
	return 0 ;
}
