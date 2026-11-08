#include <iostream>
#include <cstring>
using namespace std;
char c1[10],c2[10],s1[10],s2[10],sr[10],sx[10];
char sr1,sx1;
int p1,p2,p3,p4;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(!strcmp(c1,c2))	p1=1;
	sr[0]=s1[0];sr[1]=s1[1];sx[0]=s2[0];sx[1]=s2[1];
	sr1=s1[2];sx1=s2[2];
	if(p1 && !strcmp(sr,sx))	p2=1;
	if(p2&&((sr1>='A'&&sr1<='C'&&sx1>='A'&&sx1<='C')\
	||(sr1>='D'&&sr1<='F'&&sx1>='D'&&sx1<='F')))
	   p3=1;
	if(p3&&((sr1>='A'&&sr1<='C'&&(sx1==sr1+1||sx1==sr1-1))\
	||(sr1>='D'&&sr1<='F'&&((sx1==sr1+2||sx1==sr1-2)))))
		p4=1;
	cout<<p1<<p2<<p3<<p4<<endl;
	return 0;
}
