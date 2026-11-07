#include<bits/stdc++.h>
using namespace std;
struct wz
{
  wz a[100];	
};
int zw[17][5];
int main()
{
	int b[10];
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
		string s;
	    string c;
	for(int i=1;i<=2;i++)
	{
	   cin>>s>>c;
	   wz x[i];
	   b[i]=c;
	}
    if(c[1]==c[2])
    {
    	for(int i=1;i<=5;i++)
    {
    	for(int i=1;j<=17;j++)
    	{
    		if(zw[i][j]==wz[i])
    		{
    		  zw[i][j]=1;
			  if(zw[i][j]==zw[i-1][j]||zw[i][j]==zw[i+1][j]&&i+1<=5&&i-1>=1)
			  {
			  	if(i==3&&i+1==4)
			  	{
			  	  cout<<"1 0 1 0";	
				}
				else
				{
					cout<<" 1 1 1 1";
				}
			  }	
			}
		}
	}
   }
	else
		{
		  	for(int i=1;i<=5;i++)
        {
    	for(int i=1;j<=17;j++)
    	{
    		if(zw[i][j]==wz[i])
    		{
    		  zw[i][j]=1;
			  if(zw[i][j]==zw[i-1][j]||zw[i][j]==zw[i+1][j]&&i+1<=5&&i-1>=1)
			  {
			  	if(i==3&&i+1==4)
			  	{
			  	  cout<<"0 0 0 0";	
				}
				else
				{
					cout<<" 0 1 0 1";
				}
			  }	
			}
		  }	
		 }
	    }
	return 0;
} 
