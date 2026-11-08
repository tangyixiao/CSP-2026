#include<bits/stdc++.h>
using namespace std;
string zw1,zw2,cx1,cx2;
int s[10];
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>cx1>>zw1>>cx2>>zw2;
	if(cx1==cx2)//同车 
	{
		s[0]=1;
	}
	else
	{
		cout<<"0000";
		return 0;
	}
	if(zw1[0]==zw1[0]&&zw1[1]==zw2[1])//同列 
	{
		s[1]=1;
		switch(zw1[2])//同侧 
		{
			case 'A':{
				if(zw2[2]=='B'||zw2[2]=='C')
				{
					s[2]=1;
				}
				break;
			}
			
			case 'B':{
				if(zw2[2]=='A'||zw2[2]=='C')
				{
					s[2]=1;
				}
				break;
			}
			
			case 'C':{
				if(zw2[2]=='A'||zw2[2]=='B')
				{
					s[2]=1;
				}
				break;
			}
			
			case 'D':{
				if(zw2[2]=='F')
				{
					s[2]=1;
				}
				break;
			}
			
			case 'F':{
				if(zw2[2]=='D')
				{
					s[2]=1;
				}
				break;
			}
		}
		switch(zw1[2])//相邻 
		{
			case 'A':{
				if(zw2[2]=='B')
				{
					s[3]=1;
				}
				break;
			}
			
			case 'B':{
				if(zw2[2]=='A'||zw2[2]=='C')
				{
					s[3]=1;
				}
				break;
			}
			
			case 'C':{
				if(zw2[2]=='B')
				{
					s[3]=1;
				}
				break;
			}
			
			case 'D':{
				if(zw2[2]=='F')
				{
					s[3]=1;
				}
				break;
			}
			
			case 'F':{
				if(zw2[2]=='D')
				{
					s[3]=1;
				}
				break;
			}
		}
	}
	for(int i=0;i<4;i++)
	cout<<s[i];
	return 0;
}
