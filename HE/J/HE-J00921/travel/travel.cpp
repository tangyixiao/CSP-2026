#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
bool a[4];
int main()
{
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	for(int i=1;i<=4;i++)
	{
		a[i]=0;
	}
	if(c1==c2)
	{
		a[1]=1;
	}
	if(s1[0]==s2[0] && s1[1]==s2[1] && a[1]==1)
	{
		a[2]=1;
	
	    if(s1[2]>='A' && s1[2]<='C')
    	{
	    	if(s2[2]>='A' && s2[2]<='C')
    		{
	    		a[3]=1;
	    	}
    	}
	    else
	    {
	    	if(s2[2]>='D' && s2[2]<='F')
	    	{
		    	a[3]=1;
	    	}
    	}
    }
	if(a[3]==1 && (s1[2]-s2[2]==1 ||s2[2]-s1[2]==1))
	{
		a[4]=1;
	}
	for(int i=1;i<=4;i++)
	{
		cout<<a[i];
	}
	return 0;
}
