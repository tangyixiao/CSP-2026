#include<bits/stdc++.h>
using namespace std;
const int N=1e9+5;
char a[N];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,q;
	char s;
	cin>>n;
	long long num=0,qw=0;
	for(int i=1;i<=n;i++)
	{
		cin>>q;
		cin>>s;
		for(int i=1;i<=q;i++)
		{
			num++;
			a[num]=s;
			
		}
	}
	if(num%2==0)
	{
		long long z=num/2,x=num/2+1;
		while(z!=0&&x!=num+1)
		{
			if(a[z]!=a[x])
			{
				qw++;
			}
			z--;
			x++;
		}
	}
	else
	{
		long long z=num/2,x=num/2+2;
		while(z!=0)
		{
			if(a[z]!=a[x])
			{
				qw++;
			}
			z--;
			x++;
		}
	}
	cout<<qw;
}
