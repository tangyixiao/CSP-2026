#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	string s3,s4;
	s3=s1[0]+s1[1];
	s4=s2[0]+s2[1];
	char ch=s1[2];
	char ch2=s2[2];
	if(c1==c2)
	{
		cout<<"1";
		if(s3==s4)
		{
			cout<<"1";
			if((ch<='C'&&ch2<='C')||(ch>='D'&&ch2>='D'))
			{
				cout<<"1";
				if(abs(ch2-ch)==1)
				{
					cout<<"1";
				}
				else
				{
					cout<<"0";
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
