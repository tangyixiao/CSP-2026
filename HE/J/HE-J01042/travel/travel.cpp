#include<bits/stdc++.h>
using namespace std;
string rc,rz;
string xc,xz;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	cin >> rc >> rz >> xc >> xz;
	if(rc[0] == xc[0]&&rc[1]==xc[1])
	{
		cout << "1";
		if(rz[0]==xz[0]&&rz[1] == xz[1])
		{
			cout << "1";
			if(rz[2]<='C'&&xz[2]<='C')
			{
				cout << "1";
				int t = rz[2]-'0';
				int c = xz[2]-'0';
				if(t-c==1||t-c==-1)
				{
					cout << "1";
				}
				else
				{
					cout << "0";
				}
			}
			else if(rz[2]>='D'&&xz[2]>='D')
			{
				cout << "11";
			}
			else
			{
				cout << "00";
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
