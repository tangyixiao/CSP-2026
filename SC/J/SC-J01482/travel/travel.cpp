#include<bits/stdc++.h>
using namespace std;

int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1, c2;
	string s1, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	bool sg = 0;
	if( c1==c2 )
	{
		cout << 1;
		sg = 1;
	}
	else
	{
		cout << 0 << 0 << 0 << 0;
		return 0;
	}
	if( sg==1 )
	{
		if( s1[0]==s2[0] && s1[1]==s2[1] )	cout << 1;
		else
		{
			cout << 0 << 0 << 0;
			return 0;
		}
		
		char a = s1[2], b = s2[2];
		
		if( ( ( a=='C' || a=='A' || a=='B' ) && ( b=='C' || b=='A' || b=='B' ) ) || ( ( a=='D' || a=='E' ) && ( b=='D' || b=='E' ) ) )	cout << 1;
		else
		{
			cout << 0 << 0;
			return 0;
		}
		
		if( ( ( a+1==b && a!='C' && a!='F' ) || ( a-1==b && a!='A' && a!='D' ) ) || ( ( b+1==a && b!='C' && b!='F' ) || ( b-1==a && b!='A' && b!='D' ) ) )						cout << 1;
		else																																									cout << 0;
		return 0;
	}
	return 0;
}