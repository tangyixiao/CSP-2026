#include<bits/stdc++.h>
#define ll long long 
#define st string
using namespace std;
bool pd=1,xl;
st cr,sr,cx,sx;
st a,b;
char c,d;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>cr>>sr>>cx>>sx;
	if(cr!=cx)
	{
		pd=pd&0;	
	}
	cout<<pd;
	bool x=0;
	for(int i=0;i<2;i++)
	{
		if(sr[i]!=sx[i])
		{
			x=1;
		}
	}
	c=sr[2];
	d=sx[2];
	if(x)
	{
		pd=pd&0;
	}
	cout<<pd;
	if(c<='C'&&c>='A')
	{
		if(d>='D'&&d<='F')
		{
			pd=pd&0;
		}
		else
		{
			xl=0;
		}
	}
	if(c<='F'&&c>='D')
	{
		if(d>='A'&&d<='C')
		{
			pd=pd&0;
		}
		else
		{
			xl=1;
		}
	}
	cout<<pd;
	if(!pd)
	{
		cout<<pd;
	}
	else
	{
		if(!xl)
		{
			if(c=='A'&&d=='C')
			{
				pd=pd&0;
			}
			if(c=='C'&&d=='A')
			{
				pd=pd&0;
			}
		}
		cout<<pd;
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
