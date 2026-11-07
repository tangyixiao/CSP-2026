#include <iostream>
using namespace std;

int main()
{
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	char c1[2], s1[3], c2[2], s2[3];
	cin >> c1 >> s1 >> c2 >> s2;
	if(c1[0] != c2[0] || c1[1] != c2[1])
	{
		cout << "0000";
		return 0;
	}
	if(s1[0] != s2[0] || s1[1] != s2[1])
	{
		cout << "1000";
		return 0;
	}
	char r = s1[2], x = s2[2];
	bool rleft = (r == 'A' || r == 'B' || r == 'C');
	bool xleft = (x == 'A' || x == 'B' || x == 'C');
	if (!(rleft - xleft))
	{
		if(r == 'A' && x == 'C' || r == 'C' && x == 'A')
		{
			cout << "1110";
			return 0;
		}
		cout << "1111";
		return 0;
	}
	cout << "1100";
	return 0;
	
}
