#include<bits/stdc++.h>
using namespace std;
int main(void)
{
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	string a, b, c, d;
//	while(true)
//	{
		cin >> a >> b >> c >> d;
		cout << int(a == c) << int((a == c) && b.substr(0, 2) == d.substr(0, 2)) << int((a == c) && (b.substr(0, 2) == d.substr(0, 2)) && ('A' <= b[2] && b[2] <= 'C') == ('A' <= d[2] && d[2] <= 'C')) << int((a == c) && (b.substr(0, 2) == d.substr(0, 2)) && abs(b[2] - d[2]) == 1 && (('A' <= b[2] && b[2] <= 'C') == ('A' <= d[2] && d[2] <= 'C')));
//		cout << b.substr(0, 2) << ' ' << d.substr(0, 2);
//	}
	return 0;
}