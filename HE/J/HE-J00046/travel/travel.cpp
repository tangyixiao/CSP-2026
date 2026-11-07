#include<bits/stdc++.h>
using namespace std;
string c1,c2,s1,s2;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >>c1>>c2>>s1>>s2;
	char q=c2[2],w=s2[2];
	if(c1[0]==s1[0]&&c1[1]==s1[1])
	{
		cout << "1";
		if(c2[0]==s2[0]&&c2[1]==s2[1]) 
		{
			cout <<"1";
			if((q<='C'&&w<='C')||(q>='D'&&w>='D'))
			{
				cout << "1";
				int a=c2[2]-'0',b=s2[2]-'0';
				if(abs(a-b)==1)
				{
					cout << "1";
				}
				else
				{
					cout << "0";
				} 
			}
			else
			{
				cout <<"00";
			} 
		}
		else 
		{
			cout << "000";
		}
	}
	else 
	{
		cout << "0000";
	}
	return 0;
}
