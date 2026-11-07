#include<bits/stdc++.h>
using namespace std;
int n,m,c,d,e,f,g,h;
char a,b;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>n>>m>>a>>c>>d>>b;
	if(n==c&&n!=1&&n!=16&&c!=1&&c!=16)
	{
		e=1£» 
	}
	if(n==c&&n!=1&&n!=16&&c!=1&&c!=16&&m==d)
	{
		e=1,f=1;
	}
	if(n==c&&n!=1&&n!=16&&c!=1&&c!=16&&m==d&&(a<='C'&&b<='C'||a>='D'&&b>='D'))
	{
		e=1,f=1,g=1;
	}
	if(n==c&&n!=1&&n!=16&&c!=1&&c!=16&&m==d&&(a<='C'&&b<='C'||a>='D'&&b>='D')&&(b-1==a||b+1==a))
	{
		e=1,f=1,g=1,h=1;
	}
	cout<<e<<f<<g<<h;
	return 0;
 } 
