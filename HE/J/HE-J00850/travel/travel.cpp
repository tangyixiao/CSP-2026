#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
   string a1,a2,b1,b2;
   cin>>a1>>a2>>b1>>b2;
   int a22=int(a2[2]),b22=int(b2[2]);
   if(a1==b1&&a1!="01"&&a1!="16")
   {
  	cout<<1;
   	if(a2[1]==b2[1]&&a2[0]==b2[0])
   	{
   		cout<<1;
   		if(a2[2]>=67&&b2[2]>=67||a2[2]<67&&b2[2]<67)
   		{
   			cout<<1;
   			if(a22==b22+1||a22==b22-1)
   			{
   				cout<<1;
			   }
			   else
			   {
			   	cout<<0;
			   }
		   }
		   else
		   {
		   	cout<<"00";
		   }
		   
		   
	   }
	   else
		   {
		   	cout<<"000";
		   }
   	
   }
else
{
	cout<<"0000";
}
return 0;
}
