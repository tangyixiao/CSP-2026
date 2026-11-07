#include<bits/stdc++.h>
using namespace std;
string r1,r2,x1,x2,res;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>r1>>r2>>x1>>x2;
	
	if(r1==x1)
	{
		res[0]='1';
	}
	else
	res[0]='0';
	
	string z1,y1;
	z1=r2[0]+r2[1];
	y1=x2[0]+x2[1];
	if(z1==y1&&res[0]=='1')
	res[1]='1';
	else
	res[1]='0';
	
	char z2,y2;
	z2=r2[2];
	y2=x2[2];
	if(z2>='A'&&z2<='C'&&y2>='A'&&y2<='C'&&res[1]=='1'||z2>='D'&&z2<='F'&&y2>='D'&&y2<='F'&&res[1]=='1')
	{
		res[2]='1';
	}
	else
	res[2]='0';
	
	z2-='A';
	y2-='A';
	if(res[2]=='1'&&max(z2,y2)-min(z2,y2)==1)
	{
		res[3]='1';
	}
	else
	res[3]='0';
	
	for(int i=0;i<=3;i++)
	{
		cout<<res[i];
	}
}