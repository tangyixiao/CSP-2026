#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string rc,rs,xc,xs;
	cin>>rc>>rs>>xc>>xs;
	//R车厢 R座位 X车厢 X座位 
	string bb;
	bool a=false,b=false,c=false,d=false;
	//同一车厢 同一列 同一过道 相邻 
	if(rc==xc)
	//判断是否在同一车厢 
	{
		bb=bb+"1";
		a=true;
	}
	else
	{
		bb=bb+"0";
	}
	if(a && rs[0]==xs[0] && rs[1]==xs[1])
	//判断是否同一列 
	{
		bb=bb+"1";
		b=true;
	}
	else
	{
		bb=bb+"0";
	}
	if( b && ( rs[2]>='A' && rs[2]<='C' && xs[2]>='A' && xs[2]<='C') || 
		( rs[2]>='D' && rs[2]<='F' && xs[2]>='D' && xs[2]<='F') )
	//判断同一过道 
	{
		bb=bb+"1";
		c=true; 
	}
	else
	{
		bb=bb+"0";
	}
	if(c)
	{
		if(rs[2]>='D' && rs[2]<='F' && xs[2]>='D' && xs[2]<='F')
		{
			bb=bb+"1";
			d=true;
		}
		else if(rs[2]+1==xs[2] || rs[2]-1==xs[2])
		{
			bb=bb+"1";
			d=true;
		}
	}
	if(!d)
	{
		bb=bb+"0";
	}
	cout<<bb;
	return 0;
}
