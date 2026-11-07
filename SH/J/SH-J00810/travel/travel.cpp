#include<bits/stdc++.h>
using namespace std;
int c_1,c_2;
string s_1,s_2;
char a_1,a_2;
int sn_1,sn_2;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c_1>>s_1>>c_2>>s_2;
	a_1=s_1[2];
	a_2=s_2[2];
	sn_1+=(s_1[0]-'0')*10+s_1[1]-'0';
	sn_2+=(s_2[0]-'0')*10+s_2[1]-'0';
	if(c_1!=c_2)
	{
		cout<<"0000";
	}
	else
	{
		cout<<"1";
		if(sn_1==sn_2)
		{
			cout<<"1";
			if(a_1<='C' && a_2<='C')
			{
				cout<<"1";
				if( max((a_1-'A'),(a_2-'A'))-min((a_1-'A'),(a_2-'A'))==1 )
				{
					cout<<"1";
				}
				else
				{
					cout<<"0";
				}
			}
			else if(a_1>'C' && a_2>'C')
			{
				cout<<"11";
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
	return 0;
}
