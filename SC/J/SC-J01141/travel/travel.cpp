#include <bits/stdc++.h>
using namespace std;

int main()
{
	int c1,c2;
	string s1,s2;
	cin >> c1 >> s1 >> c2 >> s2;
	cout << (c1 == c2);
	bool i1 = (s1[0] == s2[0] && s1[1] == s2[1] && (c1 == c2)),i2 = 0,i3 = 0; 
	cout << i1;
	if ((s1[2] == 'A' || s1[2] == 'B' || s1[2] == 'C') && (s2[2] == 'A' || s2[2] == 'B' || s2[2] == 'C') && (i1 == 1) && (c1 == c2))
	{
		i2 = 1;
		if ((s1[2] == 'A' || s1[2] == 'B') && (s2[2] == 'A' || s2[2] == 'B') && (i1 == 1) && (c1 == c2))
			i3 = 1;
		else if((s1[2] == 'B' || s1[2] == 'C') && (s2[2] == 'B' || s2[2] == 'C') && (i1 == 1) && (c1 == c2))
			i3 = 1;
	}
	else if ((s1[2] == 'D' || s1[2] == 'F') && (s2[2] == 'D' || s2[2] == 'F') && (i1 == 1) && (c1 == c2))
	{
		i2 = 1;
		i3 = 1;
	}
	cout << i2 << i3;
	return 0;
}