#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	string s="";
	int x,n,k=0,sum=0,num=0;
	char m;
	cin>>n;
	for (int i=1;i<=n;i++)
	{
		cin>>x>>m;
		for (int j=1;j<=x;j++)
		{
			s+=m;
		}
		k+=x;
	}
	if (k%2==1)
	{
		int g=k/2+1;
		for (int i=g;i<k;i++)
		{
			if (s[i]!=s[k-i-1])
			{
				sum++;
			}
		}
		for (int i=0;i<=g-2;i++)
		{
			if (s[i]!=s[k-i-1])
			{
				num++;
			}
		}
		cout<<min(sum,num);
		return 0;
	}
	int l=k/2;
	for (int i=l;i<k;i++)
	{
		if (s[i]!=s[k-i-1])
		{
			sum++;
		}
	}
	for (int i=0;i<=l-1;i++)
	{
		if (s[i]!=s[k-i-1])
		{
			num++;
		}
	}
	cout<<min(sum,num);
	return 0;
}
