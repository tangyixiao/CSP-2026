#include<bits/stdc++.h>
using namespace std;
bool seat[4]={false,false,false,false};
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2)
	{
		seat[0]=true;
	}
	if(seat[0]==true)
	{
		if(s1[0]+s1[1]==s2[0]+s2[1])
		{
			seat[1]=true;
		}
		if(seat[1]==true&&((s1[2]<'D')==(s2[2]<'D')))
		{
			seat[2]=true;
		}
		if(seat[2]==true)
		{
			if((s1[2]<'D')==(s2[2]<'D'))
			{
				if(abs(s1[2]-s2[2])==1)
				{
					seat[3]=true;
				}
			}
			else
			{
				seat[3]=true;
			}
		}
	}
	for(int i=0;i<4;i++)
	{
		if(seat[i])
		{
			cout<<1;
		}
		else
		{
			cout<<0;
		}
	}
	
	return 0;
}
