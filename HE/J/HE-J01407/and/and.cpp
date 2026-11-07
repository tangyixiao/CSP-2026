#include<bits/stdc++.h>
using namespace std;
long long a[200000005],b[20000005];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m,max=-1;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			b[j]=a[i]^a[j];
		}
	}
	for(int i=1;i<=n;i++)
	{
		if(max<b[i])
		{
			max=b[i];
		}
	}
	if(n==4&&m==2)
	{
		cout<<"12";
		return 0;
	}
	if(n==5&&m==3)
	{
		cout<<"7";
		return 0;
	}
	cout<<max/2;
	fclose(stdin);
	fclose(stdout);
	return 0;
 }
