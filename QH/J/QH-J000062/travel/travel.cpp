#include <bits/stdc++.h>
using namespace std;
string c1,c2;
string s1,s2;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2)
	{
		cout<<1;
	    if((s1[0]==s2[0])&&(s1[1]==s2[1]))
		{
			cout<<1;
			if((s1[2]<='C'&&s2[2]<='C')||(s1[2]>='D'&&s2[2]>='D'))
			{
				cout<<1;
				char a=s1[2];
				char b=s2[2];
				int a1=int(a);
				int b2=int(b);
				if((a1-b2==1)||(b2-a1==1))
				{
					cout<<1;
				}
				else{
					cout<<0;
				}
		    }
			else{
				cout<<0<<0;
			}   			
		}
		else{
			cout<<0<<0<<0;
		}
	}
	else{
		cout<<0<<0<<0<<0;
	}
	return 0;
	
} 
