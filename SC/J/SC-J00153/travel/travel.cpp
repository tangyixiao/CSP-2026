#include <bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int a=0,b=0;
char x,y;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	for(int i=0;i<=1;i++)
	{
		a=a*10+(s1[i]-'0');
		b=b*10+(s2[i]-'0');
	}
	x=s1[2];
	y=s2[2];
	if(c1==c2)
	{
		cout<<1;
		if(a==b)
		{
			cout<<1;
			if(('A'<=x&&x<='C'&&'A'<=y&&y<='C')||('D'<=x&&x<='F'&&'D'<=y&&y<='F'))
			{
				cout<<1;
				if(((int)x-(int)y==1)||((int)x-(int)y==-1)&&!(x=='C'&&y=='D')&&!(x=='D'&&y=='C')) cout<<1;
				else cout<<0;
			}
			else cout<<"00";
		}
		else cout<<"000";
	}
	else cout<<"0000";
	return 0;
} 