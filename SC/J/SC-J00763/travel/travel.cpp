#include<bits/stdc++.h>
using namespace std;
int c1,s1,c2,s2;
char ss1,ss2;
int main()
{

freopen("travel.in","r",stdin);
freopen("travel.out","w",stdout); 
	cin>>c1>>s1>>ss1>>c2>>s2>>ss2;
	if(c1==c2)
	cout<<1;
	else
	{cout<<"0000";
	return 0;
	 }
	  
	if(s1==s2)
	cout<<1;
	else
	{cout<<"000";
	return 0;
	 } 
		if(ss1=='D' or ss1=='F')
		{
			if(ss2=='D' or ss2=='F')
			{cout<<11; 
			}
			else
			{
			cout<<"00";
			}
		}
		 else if(ss1=='A')
		 {
		 	if(ss2=='B')
		 	cout<<11;
		 	else if(ss2=='C')
		 	cout<<10;
		 	else
		 	cout<<"00";
		 }
		 else if(ss1=='B')
		{
			if(ss2=='A' or ss2=='C')
			cout<<11;
			else
			cout<<"00";
		}
		else
		{
			if(ss2=='B')
			cout<<11;
			else if(ss2=='A')
			cout<<10;
			else
			cout<<"00";
		}
	return 0;
}