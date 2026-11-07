#include<bits/stdc++.h>
using namespace std;
long long num,a[200100],k=0,q,num1=0;
int n;
char a1[200100];
string s;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>a1[i];
		num+=a[i];
		if(i==1) q=a[1];
		q=__gcd(q,a[i]);
	}
	for(int i=1;i<=n;i++)
	{
		for(long long j=1;j<=a[i]/q;j++)
		{
			k++;
			s[k]=a1[i];
		}
	}
	num=num/q;
	for(long long i=1;i<=num/2;i++)
	{
		if(s[i]!=s[num-i+1])
		{
			num1++;
		}
	}
	cout<<num1*q;
	return 0;
}