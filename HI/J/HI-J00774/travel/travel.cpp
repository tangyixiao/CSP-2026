#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	int a=0,b=0,c=0,d=0;
	if(c1==c2) a=1;
	string t=s1.substr(0,2);
	string s=s2.substr(0,2);
	int x,y;
	x=stoi(s);
	y=stoi(t);
	if(s==t&&a==1) b=1;
	string q=s1.substr(2,1);
	string p=s2.substr(2,1);
	int f=0;
	if((q[0]>'C'&&p[0]>'C')||(q[0]<='C'&&p[0]<='C')) f=1;
	if(f==1&&b==1) c=1;
	int h=abs(q[0]-p[0]);
	if(s1==s2) d=0;
	else if(x==y&&h==1&&f==1)
	{
		d=1;
	}
	else if(q[0]==p[0]&&x-1==y&&x+1==y) d=1;
	else d=0;
	cout<<a<<b<<c<<d;
	return 0;
} 
