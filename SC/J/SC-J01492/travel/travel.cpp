#include<iostream>
#include<cstdio>
using namespace std;
char c1[5],s1[5],c2[5],s2[5];
char a1[3]={'A','B','C'},a2[2]={'D','F'};
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	scanf("%s%s%s%s",&c1,&s1,&c2,&s2);
	bool b1=1,b2=1,b3=0,b4=0;
	for(int i=0;i<2;i++)
	{
		if(c1[i]!=c2[i])b1=0;
		if(s1[i]!=s2[i])b2=0;
	}
	if(!b1)b2=0;
	if(b2&&b1)
	{
	for(int i=0;i<3;i++)
	{
		if(s1[2]==a1[i])
		{
			for(int j=0;j<3;j++)
			{
				if(s2[2]==a1[j])
				{
				b3=1;
				if(i+1==j||i-1==j)
				 b4=1;	
				}
			}
		}
	}
	for(int i=0;i<2;i++)
	{
		if(s1[2]==a2[i])
		{
			for(int j=0;j<2;j++)
			{
				if(s2[2]==a2[j])
				{
				b3=1;
				if(i-1==j||i+1==j)b4=1;	
				}
			}
		}
	}	
	}	
	cout<<b1<<b2<<b3<<b4<<endl;
	return 0;
}