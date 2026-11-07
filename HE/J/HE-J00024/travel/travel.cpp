#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int c1, c2;
string s1, s2;
bool sameside(int col1, int col2)
{
	if (col1 <= 2 && col2 <= 2)
		return 1;
	else if (col1 >= 3 && col2 >= 3)
		return 1;
	return 0;
}
bool next(int col1, int col2)
{
	if (!sameside(col1, col2))
		return 0;
	return (abs(col1 - col2) == 1);
}
signed main()
{
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);	
	ios::sync_with_stdio(0);
	cin.tie(nullptr);
	cin >> c1 >> s1 >> c2 >> s2;
	int row1 = s1[0] * 10 + s1[1], row2 = s2[0] * 10 + s2[1];
	int col1 = (int)(s1[2] - 'A'), col2 = (int)(s2[2] - 'A');
	if (c1 == c2)
		cout << 1;
	else
		cout << 0;
	//---------------
	if (c1 == c2 && row1 == row2)
		cout << 1;
	else
		cout << 0;
	//---------------
	if (c1 == c2 && row1 == row2 && sameside(col1,col2))
		cout << 1;
	else
		cout << 0;
	//---------------
	if (c1 == c2 && row1 == row2 && next(col1,col2))
		cout << 1;
	else
		cout << 0;
	cout << endl;
}
