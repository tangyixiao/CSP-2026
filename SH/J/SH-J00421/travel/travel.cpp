#include <iostream> 
#include <cstdio>
#include <cstring>
#include <string>
using namespace std;
int main( )
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	bool f1,f2,f3,f4;
	if(c1[0]==c2[0]&&c1[1]==c2[1])
	{
		f1=true;
		if(s1[0]==s2[0]&&s1[1]==s2[1])
		{
			f2=true;
			if((s1[2]>='A'&&s1[2]<='C'&&s2[2]>='A'&&s2[2]<='C')||(s1[2]>='D'&&s1[2]<='E'&&s2[2]>='D'&&s2[2]<='E'))
			{
				f3=true;
				if((s1[2]=='A'&&s1[2]=='B'||s1[2]=='B'&&s1[2]=='A')||(s1[2]=='B'&&s1[2]=='C'||s1[2]=='C'&&s1[2]=='B')||(s1[2]=='D'&&s1[2]=='E'||s1[2]=='E'&&s1[2]=='D'))
				{
					f4=true;
				}
				else
				{
					f4=false;
				}
		    }
			else
			{
			    f3=false,f4=false;	
			}
		}
		else 
		{
		    f2=false,f3=false,f4=false;	
		}
	}
	else 
	{
		f1=false,f2=false,f3=false,f4=false;
	}
	
	cout<<f1<<f2<<f3<<f4;
	return 0;
}
