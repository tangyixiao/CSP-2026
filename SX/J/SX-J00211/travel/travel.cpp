#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5+5;
string c1, s1, c2, s2;
char ans1, ans2;
ll a;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2)
		cout << 1;
	else {
		cout << 0 << 0 << 0 << 0;
		return 0;
	}
	for (int i = 0; i < 2; i++)
		if (s1[i] == s2[i])
			a++;
	if (a == 2)
		cout << 1;
	else {
		cout << 0 << 0 << 0;
		return 0;
	}
	ans1 = s1[2];
	ans2 = s2[2];
	if (ans1 >= 'A' && ans1 <= 'C' && ans2 >= 'A' && ans2 <= 'C'  )
		cout << 1;
	else if (ans1 == 'D' && ans2 == 'F' || ans2 == 'D' && ans1 == 'F') {
		cout << 1 << 1;
		return 0;
	} else {
		cout << 0 << 0;
		return 0;
	}
	if (ans1 == 'A' && ans2 == 'B' || ans1 == 'B' && ans2 == 'A' || ans1 == 'B' && ans2 == 'C' || ans1 == 'C'
	        && ans2 == 'B')
		cout << 1;
	else
		cout << 0;
	return 0;
}
