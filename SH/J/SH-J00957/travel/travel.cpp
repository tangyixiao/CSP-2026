#include<bits/stdc++.h>
using namespace std;
string a1,a2,a3,a4;
long long flag1,flag2;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a1>>a2>>a3>>a4;
	if(a1[0]==a3[0]&&a1[1]==a3[1])
	{
		cout<<"1";
		if(a2[0]==a4[0]&&a2[1]==a4[1])
		{
			cout<<"1";
			flag1=a2[2]-'A'+1;
			flag2=a4[2]-'A'+1;
			if((flag1<=3&&flag2<=3)||(flag1>3&&flag2>3))
			{
				cout<<"1";
				if(abs(flag1-flag2)==1)
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
