#include<bits/stdc++.h>
using namespace std;
int n,num=0;
string st,a1,a2;
int main()
{
	freopen("string.in.cpp","r",stdin);
	freopen("string.out.cpp","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int a;
		char x;
		cin>>a>>x;
		for(int j=1;j<=a;j++)
		{
			st+=x;
			num++;
		}
	}
	int d=num;
	if(num%2==0)
	{
		num/=2;
	}
	else
	{
		num-1;
		num/=2;
	}
	for(int i=0;i<=num-1;i++)
	{
		a1+=st[i];
	}
	for(int i=d;i>=num;i--)
	{
		a2+=st[i];
	}
	if(a1==a2)
	{
		cout<<'0';
		return 0;
	}
	int dn=0;
	for(int i=0;i<=num-1;i++)
	{
		if(a1[i]!=a2[i])
		{
			dn++;
		}
	}
	cout<<dn;
	return 0;
}
