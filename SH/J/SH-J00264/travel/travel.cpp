#include<bits/stdc++.h>
using namespace std;

string c1,s1,c2,s2;
char a,b;

int main()
{
	freopen("travel.in","r",stdin);	
	freopen("travel.out","w",stdout);
	
	cin >> c1 >> s1 >> c2 >> s2;
	a=(10*(c1[0]-'0')+(c1[1]-'0'));
	b=(10*(c2[0]-'0')+(c2[1]-'0'));
	if(a==b)
	{
		cout << "1";
		a=(10*(s1[0]-'0')+(s1[1]-'0'));
		b=(10*(s2[0]-'0')+(s2[1]-'0'));
		if(a==b)
		{
			cout << "1";
			a=s1[2];
			b=s2[2];
			if((a=='D'&&b=='F') || (a=='F'&&b=='D') || (a=='B'&&b=='A') || (a=='A'&&b=='B') || (a=='B'&&b=='C') || (a=='C'&&b=='B'))
				cout << "11";
			else
			{
				if((a=='A'&&b=='C') || (a=='C'&&b=='A'))
					cout << "10";
				else{
					cout << "00";
				}
			}
		}else{
			cout << "000";
		}
	}
	else
	{
		cout << "0000";
	}
	
	return 0;
} 
