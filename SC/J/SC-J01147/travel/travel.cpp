#include<bits/stdc++.h>
using namespace std;
string a,b,a1,b1,a2,b2;
char a3,b3;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>a1>>b>>b1;
	a2+=a1[0];a2+=a1[1];
	b2+=b1[0];b2+=b1[1];
	a3=a1[2];b3=b1[2];
	if(a==b)
	{
		cout<<"1";
		if(a2==b2)
		{
			cout<<"1";
			if((a3<='C'&&b3<='C') || (a3>'C'&&b3>'C'))
			{
				cout<<"1"; 
				if(a3+1==b3 || b3+1==a3)
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