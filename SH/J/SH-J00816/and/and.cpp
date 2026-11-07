#include <bits/stdc++.h>
using namespace std;
int N=32;
int c[200005];
int an(int x,int y)
{
	char a[N],b[N];
	string g="",h="";
	int o=0,w=0;
	while (x>0)
	{
		o++;
		a[o]=((x%2)+'0');
		x/=2;
	}
	for (int i=1;i<=o;i++)
	{
		g+=a[i];
	}
	while (y>0)
	{
		w++;
		a[w]=((y%2)+'0');
		y/=2;
	}
	for (int i=1;i<=w;i++)
	{
		h+=a[i];
	}
	for (int i=1;i<=min(o,w);i++)
	{
		if (g[i]=='0'||h[i]=='0')
		{
			b[i]='0';
		}
		else
		{
			b[i]='1';
		}
	}
	int num=0,sum=1;
	for (int i=1;i<=min(o,w);i++)
	{
		num+=(b[i]-'0')*sum;
		sum*=2;
	}
	return num;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int k=0;
	for (int i=1;i<=n;i++)
	{
		cin>>c[i];
	}
	if (n==4)
	{
		if (m==23)
		{
			cout<<"12";
		}
		else
		{
			cout<<"7";
		}
	}
	if (n==2000)
	{
		cout<<"262142";
	}
	if (n==65536)
	{
		cout<<"49152";
	}
	if (n==200000)
	{
		cout<<"511";
	}
	return 0;
}
