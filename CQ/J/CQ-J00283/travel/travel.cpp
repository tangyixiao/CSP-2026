#include <iostream>
#include <map>
using namespace std;

map <char, bool> mp;

int main()
{
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string a, b, c, d;
	cin >> a >> b >> c >> d;
	mp['A'] = 1, mp['B'] = 1, mp['C'] = "1";
	mp['D'] = 0, mp['F'] = 0;
	if (a == c) cout << 1;
	else
	{
		cout << "0000" << endl;
		return 0;
	}
	if (b.substr(0, 2) == d.substr(0, 2)) cout << "1";
	else
	{
		cout << "000" << endl;
		return 0;
	}
	if (mp[b[2]] == mp[d[2]]) cout << "1";
	else
	{
		cout << "00" << endl;
		return 0;
	}
	if ((b[2] == 'A' && d[2] == 'B') || 
	    (b[2] == 'B' && d[2] == 'C') ||
	    (b[2] == 'D' && d[2] == 'F') ||
	    (b[2] == 'B' && d[2] == 'A') ||
	    (b[2] == 'C' && d[2] == 'B') ||
	    (b[2] == 'F' && d[2] == 'D')) cout << "1" << endl; 
	else cout << "0" << endl;
	return 0; 
}
