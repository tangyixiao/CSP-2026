#include<bits/stdc++.h>
using namespace std;


bool flag1,flag2,flag3,flag4;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout); 
	string cr,sr,cx,sx;
	cin>>cr>>sr>>cx>>sx;
	if(cr!=cx)
	{
		cout<<"0000";
		return 0;
	}
	else
	{
		cout<<"1";
		bool flag2=0;
		if(sr[0]==sx[0]&&sr[1]==sx[1])
		{
			flag2=1;
			cout<<"1";
		}
		else
		{
			cout<<"0";
		}
		if(flag2==1)
		{
			bool flag=0;
			if((sr[2]<='C'&&sx[2]<='C')||(sr[2]>='D'&&sx[2]>='D'))
			{
				cout<<"1";
				flag=1;
			}
			else
			{
				cout<<"0";
			}
			if(flag==1)
			{
				if(abs((sx[2]-'A')-(sr[2]-'A'))==1)
				{
					cout<<"1";
					return 0;
				}
			}
			cout<<"0";
			return 0;
		}
		cout<<"00";
	}
	return 0;
}
