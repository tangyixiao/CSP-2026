#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
    ios::sync_with_stdio(false);
	cin.tie(NULL);
	int cr,cx;
	string sr,sx;
	cin>>cr>>sr>>cx>>sx;
	if(cr!=cx)
	{
		cout<<"0000";
	}
	else if(sr[0]==sx[0]&&sr[1]==sx[1])
	{
		if(((sr[2]=='A'||sr[2]=='B'||sr[2]=='C')&&(sx[2]=='A'||sx[2]=='B'||sx[2]=='C'))||((sr[3]=='D'||sr[2]=='F')&&(sx[2]=='D'||sx[2]=='F')))
		{
			if((sr[2]=='A'||sr[2]=='B')&&(sx[2]=='A'||sx[2]=='B')||(sr[2]=='B'||sr[2]=='C')&&(sx[2]=='B'||sx[2]=='C')||(sr[2]=='D'||sr[2]=='F')&&(sx[2]=='D'||sx[2]=='F'))
			{
				cout<<"1111";
			}
			else
			{
				cout<<"1110";
			}
		}
		else
		{
			cout<<"1100";
		}
	}
	else
	{
		cout<<"1000";
	}
	return 0;
}
