#include <iostream>
using namespace std;

string c1, s1, c2, s2;
bool ck[] = {0, 0, 0, 1, 1, 1};

int main() 
{
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 != c2)
		cout << "0000";
	else if (s1[0] != s2[0] || s1[1] != s2[1])
		cout << "1000";
	else if (ck[s1[2] - 'A'] != ck[s2[2] - 'A'])
		cout << "1100";
	else if (abs(s1[2] - s2[2]) != 1)
		cout << "1110";
	else
		cout << "1111";
	return 0;
}
