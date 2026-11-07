#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int c1,c2;
	string s1,s2;
	bool f1 = false,f2 = false,f3 = false,f4 = false;
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2) f1 = true;
	int t1 = (s1[0]-'0')*10+(s1[1]-'0'),t2 = (s2[0]-'0')*10+(s2[1]-'0');
	if (f1 && t1 == t2) f2 = true;
	if (f2)
	{
		if ((s1[2] == 'A' && s2[2] == 'B') || (s1[2] == 'B' && s2[2] == 'A') || (s1[2] == 'B' && s2[2] == 'C') || (s1[2] == 'C' && s2[2] == 'B') || (s1[2] == 'D' && s2[2] == 'F') || (s1[2] == 'F' && s2[2] == 'D')) f3 = f4 = true;
		else if ((s1[2] == 'A' && s2[2] == 'C') || (s1[2] == 'C' && s2[2] == 'A')) f3 = true;
	}
	cout << f1 << f2 << f3 << f4;
	return 0;
}