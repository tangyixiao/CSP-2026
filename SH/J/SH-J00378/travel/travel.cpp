#include <iostream>
#include <algorithm>
using namespace std;

int ans[5];
string c1, s1, c2, s2;

bool near(char a, char b)
{
	if (a <= 'C' && b <= 'C') return true;
	if (a >= 'D' && b >= 'D') return true;
	else return false;
}

bool next_to(char a, char b)
{
	int x = a - 'A' + 1, y = y - 'A' + 1;
	return x == y + 1 || y == x + 1;
}

void check()
{
	int a1 = stoi(c1), b1 = stoi(s1.substr(0, 2));
	int a2 = stoi(c2), b2 = stoi(s2.substr(0, 2));
	char c1 = s1[2], c2 = s2[2];
	if (a1 == a2)
	{
		ans[1] = 1;
		if (b1 == b2)
		{
			ans[2] = 1;
			if (near(c1, c2))
			{
				ans[3] = 1;
				if (next_to(c1, c2)) ans[4] = 1;
			}
		}
	} 	
}

int main()
{
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	check();
	for (int i = 1; i <= 4; i++)
		cout << ans[i]; 
	cout << endl;
	return 0;
}
