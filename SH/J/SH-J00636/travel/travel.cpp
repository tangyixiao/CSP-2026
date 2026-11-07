#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	string c1, c2, s1, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	int num1 = (s1[0] - '0') * 10 + (s1[1] - '0');
	int num2 = (s2[0] - '0') * 10 + (s2[1] - '0');
	bool flag = ((s1[2] == 'C' && s2[2] == 'D') || (s1[2] == 'D' && s2[2] == 'C'));
	if(c1 == c2) cout << 1;
	else cout << 0;
	if(c1 == c2 && num1 == num2) cout << 1;
	else cout << 0;
	if(c1 == c2 && num1 == num2 && ((s1[2] <= 'C' && s2[2] <= 'C') || (s1[2] >= 'D' && s2[2] >= 'D'))) cout << 1;
	else cout << 0;
	if(c1 == c2 && num1 == num2 && ((s1[2] <= 'C' && s2[2] <= 'C') || (s1[2] >= 'D' && s2[2] >= 'D')) && (abs(s1[2] - s2[2]) == 1)) cout << 1;
	else cout << 0;
	return 0;
}
