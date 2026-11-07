#include<bits/stdc++.h>
using namespace std;
//T1正解100代码 
//A,B,C,D,F
//如是同一节车厢 ，同意排才有后面判断 
int a,c,n,m,ans[4];
string b,d;
char x,y;
bool istc(char x,char y)
{
	return x<='C'&&y<='C'||x>='D'&&y>='D';
}
bool isxl(char x,char y)
{
	return abs(y-x)==1;
}
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d;
	x=b[2],y=d[2];
	if(x=='F')
	{
		x='E';
	}
	if(y=='F')
	{
		y='E';
	}
	ans[0]=(a==c?1:0);
	if(ans[0]&&b.substr(0,2)==d.substr(0,2))
	{
		ans[1]=1;
	}
	else
	{
		ans[1]=0;
	}
	if(ans[1]&&istc(x,y))
	{
		ans[2]=1;
	}
	else
	{
		ans[2]=0;
	}
	if(ans[2]&&isxl(x,y))
	{
		ans[3]=1;
	}
	else
	{
		ans[3]=0;
	}
	cout<<ans[0]<<ans[1]<<ans[2]<<ans[3];
	return 0;
}
