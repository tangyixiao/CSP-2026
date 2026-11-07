#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string c1, s1, c2, s2, ans = "";
	cin >> c1 >> s1 >> c2 >> s2;
	int z1 = (s1[0] - '0') * 10 + s1[1] - '0', z2 = (s2[0] - '0') * 10 + s2[1] - '0';
	char ch1 = s1[2], ch2 = s2[2];
	if (c1 == c2) ans += "1";
	else  {
		cout << "0000" << endl;
		return 0;
	}
	if (z1 == z2) ans += "1";
	else {
		cout << "1000" << endl;
		return 0;
	}
	if (((ch1 >= 'A' && ch1 <= 'C') && (ch2 >= 'A' && ch2 <= 'C')) || ((ch1 >= 'D' && ch1 <= 'E') && (ch2 >= 'D' && ch2 <= 'E'))) ans += "1";
	else {
		cout << "1100" << endl;
		return 0;
	}
	if (abs(ch1 - ch2) == 1) ans += "1";
	else {
		cout << "1110" << endl;
		return 0;
	}
	cout << ans << endl;
	return 0;   
} 
