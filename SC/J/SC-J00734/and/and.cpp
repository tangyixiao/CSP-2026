#include<bits/stdc++.h>
using namespace std;
int a[100],b[100][10000],c[100],x[100],sm=0,y=0,m;
int zm(int n,int m)
{
	int s=0;
	for(int i=n-m+1;i<=n;s++)
	{
		if(i==n-m+1)
		{
			s=s*10+1;
		}
		s=s*10+i;
	}
	return s;
}
void chf(int n)
{
	int i=0,s=0,s10=0;
	while(n>0)
	{
		x[i]=n%10;
		n=n/10;
		i++;
	}
	for(int j=0;j<=i;j++)
	{
		for(int l=j+1;l<=i;l++)
		{
			if(x[j]==x[l])
			{
				s++;
			}
		}
	}
	if(s==0)
	{
		for(int j=0;j<m;j++)
		{
			for(int l=sm;l>=0;l--)
			{
				if(b[j][x[l]]==b[j][x[l-1]])
				{
					s10=s10*2+1;
				}
			}
		}
		if(s10>y)y=s10;
		s10==0;
	}
	
}
int main()
{
	ifstream fin("in.txt");
	ofstream fout("out.txt");
	int n,m,s=0,d,s2=0;
	fin>>n;
	fin>>m;
	for(int i=0;i<n;i++)
	{
		fin>>a[i];
		d=a[i];
		while(d>0)
		{
			b[i][s]=d%2;
			d=d/2;
			s++;
		}
		if(sm<s)
		{
			sm=s;
		}
		s=0;
	}
	for(int i=0;i<zm(n,m);i++)
	{
		chf(i);
	}
	fout<<y;
	return 0; 
} 