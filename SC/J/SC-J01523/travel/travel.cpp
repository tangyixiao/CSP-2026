#include <bits/stdc++.h>
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
string c1,s1;
string c2,s2;
int main(int argc, char** argv)
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1;
	cin>>c2>>s2;

	if(c1==c2)
	{
		cout<<"1";
		if(s1[0]==s2[0] && s1[1]==s2[1])
		{
			cout<<"1";
			if((s1[2]=='D'&&s2[2]=='F') || (s1[2]=='F'&&s2[2]=='D') || (s1[2]=='B'&&s2[2]=='A') || (s1[2]=='B'&&s2[2]=='C') || (s1[2]=='A'&&s2[2]=='B') || (s1[2]=='C'&&s2[2]=='B'))
			{
				cout<<"11";
				return 0;
			}
			else
			{
				if(s1[2]<='C' && s2[2]<='C')
				{
					cout<<"10";
					return 0;
				}
				else
				{
					cout<<"00";
				}
			}
		}
		else
		{
			cout<<"000";
			return 0;
		}
	}
	else
	{
		cout<<"0000"<<endl;
		return 0;
	}
	return 0;
}
//? Á½ÕÅ³µÆ±¶ÔÓ¦µÄ×ùÎ»ÊÇ·ñÔÚÍ¬Ò»½Ú³µÏá£»
//? Á½ÕÅ³µÆ±¶ÔÓ¦µÄ×ùÎ»ÊÇ·ñÔÚÍ¬Ò»½Ú³µÏáµÄÍ¬Ò»ÅÅ£»
//? Á½ÕÅ³µÆ±¶ÔÓ¦µÄ×ùÎ»ÊÇ·ñÔÚÍ¬Ò»½Ú³µÏáµÄÍ¬Ò»ÅÅ£¬ÇÒÎ»ÓÚ¹ýµÀµÄÍ¬Ò»²à£»
//? Á½ÕÅ³µÆ±¶ÔÓ¦µÄ×ùÎ»ÊÇ·ñÏàÁÚ¡£