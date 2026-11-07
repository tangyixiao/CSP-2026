#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<string>
#include<cstring>
using namespace std;
string a,b,x,y,t1,t2;
char q,p;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>x>>b>>y;
	t1+=x;
	t2+=y;
	t1.erase(2,2);
	t2.erase(2,2);
	q=(char)x[2];
	p=(char)y[2];
	if (a==b) cout<<"1";
	else cout<<"0";
	if (a==b&&t1==t2) cout<<"1";
	else cout<<"0";
	if (a==b&&t1==t2&&((q<='C'&&p<='C')||(q>='D'&&p>='D'))) cout<<"1";
	else cout<<"0";
	if (a==b&&t1==t2&&((q<='C'&&p<='C')||(q>='D'&&p>='D'))&&(abs((int)q-(int)p)==1||((int)q=='D'&&(int)p=='F')||((int)p=='D'&&(int)q=='F'))) cout<<"1";
	else cout<<"0";
	return 0;
}