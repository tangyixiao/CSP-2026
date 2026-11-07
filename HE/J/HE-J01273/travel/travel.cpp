#include<iostream>
using namespace std;
bool a,b,c,d;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,c2,c3,c4;
	cin>>c1>>c2>>c3>>c4;
	if(c1==c3)
	{
		a=1;
	}
	if(c2[0]==c4[0])
	{
		if(c2[1]==c4[1])
		{
			b=1;
		}
		
	}
	if(c2[2]<='C')
	{
		if(c4[2]<='C')
		{
			c=1;
		}
	}
	if(c2[2]>'C')
	{
		if(c4[2]>'C')
		{
			c=1;
		}
	}
	if(c2[2]==(c4[2]+1)||(c2[2]+1)==c4[2])
	{
		if(c==1)
		{
			d=1;
		}
	}
	if(c1!=c3)
	{
		a=0;
		b=0;
		c=0;
		d=0;
	}
	cout<<a<<b<<c<<d;
	
	
}
