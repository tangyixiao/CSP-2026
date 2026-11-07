#include<bits/stdc++.h>
using namespace std;
long long i,j,k,n,m,dp,z;
string a;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>m>>a[k];
		for(j=k+1;j<m+k;j++)
		{
			a[j]=a[j-1];
		}
		k+=m;
	}
	for(i=k-1;i>k/2;i--)
	{
		if(a[i]!=a[k-i-1])
		{
			a[i]=a[k-i];
			z++;	
		}
	}
	cout<<z;
	fclose(stdin);
	fclose(stdout);
	return 0;	
} 
