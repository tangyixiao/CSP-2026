#include<bits/stdc++.h>
using namespace std;
char c[100000000];
int main()
{
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
	int a,e=0;
	int b;
	char d;
	cin>>a;
	for(int i=1;i<=a;i++)
	{
		cin>>b;
		cin>>d;
		for(int j=1;j<=b;j++)
		{
			e++;
			c[e]=d;                         
		}
	}
	int w=0;
	int p=e;
	if(e%2==0)
	{
		e/=2;
		for(int i=1;i<=e;i++)
		{
			if(c[i]!=c[p+1-i])
			{
				w+=1;
			}
		}
	}
	else
	{
		e+=1;
		e/=2;
		for(int i=1;i<e;i++)
		{
			if(c[e+i]!=c[e-i])
			{
				w+=1;
			}
		}
	}
	cout<<w;
	return 0;
}