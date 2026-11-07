#include<bits/stdc++.h>
using namespace std;
string cr,sr,cx,sx;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>cr>>sr>>cx>>sx;
	if(cr[0]==cx[0] && cr[1]==cx[1])
	{
		cout<<"1";
		if(sr[0]==sx[0] && sr[1]==sx[1])
		{
			cout<<"1";
			if(sr[2]=='A' || sr[2]=='B' || sr[2]=='C')
			{
				if(sx[2]=='A' || sx[2]=='B' || sx[2]=='C')
				{
					cout<<"1";
					if(sr[2]+1==sx[2])
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
				if(sx[2]=='D' || sx[2]=='F')
				{
					cout<<"11+";
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
		}
	}
	else
	{
		cout<<"0000";
	}
	return 0;
}
