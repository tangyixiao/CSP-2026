#include<bits/stdc++.h>
using namespace std;
string s;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,a2,b2;
	char c[5]={'A','B','C','D','F'};
	cin>>a>>a2>>b>>b2;
	if(a==b)
	{
		if(a2[0]==b2[0]&&a2[1]==b2[1])
		{
			if((a2[2]==c[0]||a2[2]==c[1]||a2[2]==c[2])&&(b2[2]==c[0]||b2[2]==c[1]||b2[2]==c[2])||a2[2]==c[3]&&b2[2]==c[4]||a2[2]==c[4]&&b2[2]==c[3])
			{
				if(a2[2]!=c[1]&&b2[2]!=c[1])cout<<"1110";
				else cout<<"1111";
			}
			else cout<<"1100";
		}
		else cout<<"1000";
	}
	else cout<<"0000";
 } 