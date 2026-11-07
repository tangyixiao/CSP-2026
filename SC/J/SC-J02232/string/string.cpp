#include<bits/stdc++.h>
using namespace std;
char a,s[500000005],b[500000005];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long i,j,x=0,m,n,p,q,num=0,flag=0;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>m>>a;
		num+=m;
		for(j=1;j<=m;j++)
		{
			s[x]=a;
			x++;
		}
	}
	for(i=0;i<num/2;i++)
	{
		b[i]=s[num-i-1];
	}
	for(i=0;i<num/2;i++)
	{
		p=b[i];
		q=s[i];
		if(p-q!=0)
		{
			flag++;
		}
	}
	cout<<flag;
	return 0;
} 