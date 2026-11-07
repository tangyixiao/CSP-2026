#include<bits/stdc++.h>
using namespace std;
int n,a[2001],num;
char c[2002],s1[1001],s2[1001];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string .out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>c[i];
		num+=a[i];
	}
	for(int i=1,j=1;;j++)
	{
		while(a[j]>=1)
		{
			char x=c[j];
			s1[i++]=x;>
			if(i>n/2)
			{
				break;
			}
			a[j]--;
		}
	}
	for(int i=1,j=n;;j--)
	{
		while(a[j]>=1)
		{
			char x=c[j];
			s2[i++]=x;
			if(i<n/2)
			{
				break;
			}
			a[j]--;
		}
	}
	for(int i=1;i<=n/2;i++)
	{
		if(s1[i]!=s2[i])
		{
			num++;
		}
	}
	cout<<num;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
