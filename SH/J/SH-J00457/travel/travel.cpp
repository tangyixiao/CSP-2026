#include <bits/stdc++.h>
using namespace std;

int main()
{
	freopen(travel.in, "r", stdin);
	freopen(travel.out, "w", stdout);
	int c1, c2;
	string s1, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2) cout << 1;
	else
	{
		cout << "0000" << endl;
		return 0;
	}
	string ss1 = "", ss2 = "";
	/*
	ss1[0] = s1[0];
	ss1[1] = s1[1];
	ss2[0] = s2[0];
	ss2[1] = s2[1];
	*/
	ss1 = ss1 + s1[0] + s1[1];
	ss2 = ss2 + s2[0] + s2[1];
	//cout << endl << ss1 << " " << ss2 << endl;
	if (ss1 == ss2) cout << 1;
	else
	{
		cout << "000" << endl;
		return 0;
	}
	char cc1, cc2;
	cc1 = s1[2];
	cc2 = s2[2];
	if ( ( (cc1 <= 'C' && cc1 >= 'A') && (cc2 <= 'C' && cc2 >= 'A') ) || ( (cc1 <= 'F' && cc1 >= 'D') && (cc2 <= 'F' && cc2 >= 'D') ) )
	{
		cout << 1;
	}
	else
	{
		cout << "00" << endl;
		return 0;
	}
	if ((s1[2] == 'A' && s2[2] == 'B') || (s1[2] == 'C' && s2[2] == 'B') || (s1[2] == 'B' && s2[2] == 'C') || (s1[2] == 'B' && s2[2] == 'A') || (s1[2] == 'D' && s2[2] == 'F') || (s1[2] == 'F' && s2[2] == 'D'))
	{
		cout << 1 << endl;
	}
	else cout << 0 << endl;
	return 0;
} 
