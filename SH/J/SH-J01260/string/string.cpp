#include<bits/stdc++.h>
using namespace std;
int main()
{
	char s1[100],s2[100];
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,a,w=1,sum=0,l=0;
	char c;
	cin>>n;
	if(n==1)
	{
		cout<<0;
		return 0;
	 } 
	for(int i=1;i<=n;i++)
	{
		cin>>a>>c;
		for(int j=w;j<=a+w-1;j++)
		{
			s1[j]=c;
			s2[j]=c;
			w+=a;
			l=j;
		}
	}
	long long b=1;
	for(int i=l;i>=1;i--)
	{
		if(s2[i]!=s1[b])
		{
			sum++;
		}
		b++;
	}
	cout<<sum;
	return 0;
}
