#include <bits/stdc++.h>
using namespace std;

string R1,R2,X1,X2;
int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> R1 >> R2 >> X1 >> X2;
	if (R1!=X1)
	{
		cout << "0000";
		return 0;
	}
	else
	{
		if (!((R2[0]==X2[0]) && (R2[1]==X2[1])))
		{
			cout << "1000";
			return 0;
		}
		else
		{
			if (!((R1[2]>='A' && R1[2]<='C' && X1[2]>='A' && X1[2]<='C') || (R1[2]>='D' && R1[2]<='F' && R1[2]>='D' && R1[2]<='F')))
			{
				cout << "1100";
				return 0;
			}
			else
			{
				if (!((R1[2]=='A' && X1[2]=='B') || (R1[2]=='B' && X1[2]=='A') || (R1[2]=='B' && X1[2]=='C') || (R1[2]=='C' && X1[2]=='B') || (R1[2]=='D' && X1[2]=='F') || (R1[2]=='F' && X1[2]=='D')))
				{
					cout << "1110";
					return 0;
				}
				else
				{
					cout << "1111";
					return 0;
				}
			}
		}
	}
	return 0;
} 
