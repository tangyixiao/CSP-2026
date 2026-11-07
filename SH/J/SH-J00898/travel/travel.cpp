#include <iostream>
#include <cmath>

using namespace std;

const int LEFT = 1;
const int RIGHT = 2;

struct person
{
	int c;
	string s;
};

person a, b;
bool ans[10];

int check_side(char x)
{
	if ('A' <= x && 'C' >= x)
		return LEFT;
	return RIGHT;
}

int main()
{
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	cin >> a.c >> a.s;
	cin >> b.c >> b.s;
	
	ans[0] = true;
	ans[1] = ans[0] && (a.c == b.c);
	ans[2] = ans[1] && (a.s.substr(0, 2) == b.s.substr(0, 2));
	ans[3] = ans[2] && (check_side(a.s[2]) == check_side(b.s[2]));
	ans[4] = ans[3] && (abs(a.s[2] - b.s[2]) == 1);
	
	for (int i = 1; i <= 4; ++i)
		cout << ans[i];
	return 0;
}

