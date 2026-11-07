#include<bits/stdc++.h>
using namespace std;
string rc,rs,xc,xs;
int a=0,b=0;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>rc>>rs>>xc>>xs;
	if(rc==xc)
	{
		cout<<"1";
	}
	if(rc!=xc)
	{
		cout<<"0";
	}
//	cout<<rs[1]<<xs[1];
	if(rc==xc&&rs[0]==xs[0]&&rs[1]==xs[1])
	{
		cout<<"1";
	}
	if(rc!=xc||rs[0]!=xs[0]||rs[1]!=xs[1])
	{
		cout<<"0";
	}
	if(rc==xc&&rs[0]==xs[0]&&rs[1]==xs[1]&&(((rs[2]=='A'||rs[2]=='B'||rs[2]=='C')&&(xs[2]=='A'||xs[2]=='B'||xs[2]=='C'))||((rs[2]=='D'||rs[2]=='F')&&(xs[2]=='D'||xs[2]=='F'))))
	{
		cout<<"1";
		a=1;
	}
	if(a==0)
	{
		cout<<"0";
	}
	if(a==1&&((rs[2]=='A'&&xs[2]=='B')||(rs[2]=='B'&&xs[2]=='C')||(rs[2]=='B'&&xs[2]=='A')||(rs[2]=='C'&&xs[2]=='B')||(rs[2]=='D'&&xs[2]=='F')||(rs[2]=='F'&&xs[2]=='D')||(rs[2]=='B'&&xs[2]=='A')||(rs[2]=='C'&&xs[2]=='B')||(rs[2]=='A'&&xs[2]=='B')||(rs[2]=='B'&&xs[2]=='C')||(rs[2]=='D'&&xs[2]=='F')||(rs[2]=='F'&&xs[2]=='D')))
	{
		cout<<"1";
		b=1;
	}
	if(b==0)
	{
		cout<<0;
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
