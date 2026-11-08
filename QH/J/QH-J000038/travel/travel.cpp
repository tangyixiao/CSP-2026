#include<iostream>
#include<string> 
using namespace std;
int a[17];
str b[01A,01B,01c,02A,02B,02C,03A,03B,03C,04A,04B,04C,05A,05B,05C,06A,06B,06C,07A,07B,07C,08A,08B,08C,09A,09B,09C,10A.10B,10C,11A,11B,11C,12A,12B,12C,13A,13B,13C,14A,14B,14C,15A,15B,15C,16A,16B,16C,17A,17B,17C,18A,18B,18C],c[01D,01E,02D,02E,03D,03E,04D,04E,05D,05E,06D,06E,07D,07E,08D,08E,09D,09E,10D,10E,11D,11E,12D,12E,13D,13E,14D,14E,15D,15E,16D,16E,17D,17E,18D,18E]
{
	freopen("travel.in","r",stdin)
	freopen("travel.out","w",stdout)
	str c1,c2;
	str s1,s2;
	cin>>c1>>s1>>c2>>s2;
	for(int i=0;i<a.size();i++)
	{
		if(i==0||i==15){
			continue;
		}
		if(b[i]==b[c1])
		{
			b[s1]=b[i];
		}
		if(c[i]==c[c1])
		{
			c[s1]=c[i];
		}
	}
	if(c1==c2)
	{
		cout<<1;
	}
	else
	{
		cout<<0;
	}
	return 0;
 } 
