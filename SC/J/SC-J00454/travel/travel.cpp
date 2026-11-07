#include<iostream>
#include <cstdio>
#include <cmath> 
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,c2,c3,c4;
	cin>>c1>>c2>>c3>>c4;
	bool a[5]={false,false,false,false,false};
	if(c1==c3)
	{
		a[1]=true;
	}
	if(a[1]&&(c2[0]==c4[0]&&c2[1]==c4[1]))
	{
		a[2]=true;
	}
	int x=c2[2]-'A',y=c4[2]-'A';
	if(a[2]&&!(x>=3&&y<3||x<3&&y>=3))
	{
		a[3]=true;
	}
	if(a[3]&&!(x==3&&y!=5||x!=5&&y==4)&&!(x==3&&y==2||x==2&&y==3)&&(abs(x-y)==1))
	{
		a[4]=true;
	}
	for(int i=1;i<=4;i++)
	{
		cout<<a[i];
	}
	return 0;
}