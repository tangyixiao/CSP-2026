#include<iostream>
#include <cstdio>
#include <string> 
using namespace std;
string c1,c2,s1,s2;
bool t(string x,string y)
{
	bool n=false;
	char z1=x[0];
	char z2=y[0];
	char t1=x[1];
	char t2=y[1];
	if(z1==z2&&t1==t2)	n=true;
	return n;
}
bool l(string x,string y,bool z)
{
	bool n=false;
	char a=x[2];
	char b=y[2];
	if(z==1&&b-a==1||a-b==1)	n=true;
	else if(z==1&&(a>='D'||b>='D')&&b-a==2||a-b==2)	n=true;
	return n;
}
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	bool x=t(c1,c2);
	bool y=t(s1,s2);
	cout<<x<<y;
	bool q;
	if(s1[2]<'D'&&s2[2]<'D')	q=true;
	else	if(s1[2]>='D'&&s2[2]>='D')	q=true;
	else q=false;
	bool c=l(s1,s2,q);
	cout<<q<<c;
	return 0;
}
