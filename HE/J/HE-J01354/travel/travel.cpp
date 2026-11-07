#include <bits/stdc++.h>
using namespace std;

string RC,RZ,XC,XZ;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>RC>>RZ>>XC>>XZ;
	if(RC==XC)
	{
		cout<<"1";
		if((RZ[0]==XZ[0])&&(RZ[1]==XZ[1]))
		{
			cout<<"1";
			bool RIL=(RZ[2]<='C'),XIL=(XZ[2]<='C');
			if(RIL==XIL)
			{
				cout<<"1";
				short tem=max(RZ[2],XZ[2])-min(RZ[2],XZ[2]);
				if(tem==1)
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
