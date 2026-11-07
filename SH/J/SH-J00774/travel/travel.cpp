#include <bits/stdc++.h>
#define ll long long
using namespace std;
int chk(string x)
{
	if(x == "A" || x == "B" || x == "C")
		return 1;
	else
		return 0;
}
bool chk_beside(char a, char b)
{
	if(a > b) swap(a, b);
	if(a == 'A' && b == 'B')
		return 1;
	if(a == 'B' && b == 'C')
		return 1;
	if(a == 'D' && b == 'F')
		return 1;
	return 0;
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string r_c, r_s, r_p, r_t;
	string x_c, x_s, x_p, x_t;
	cin >> r_c >> r_s >> x_c >> x_s;
	r_p = r_s.substr(0, 2);
	r_t = r_s.substr(2, 1);
	x_p = x_s.substr(0, 2);
	x_t = x_s.substr(2, 1);
	if(r_c == x_c)
		cout << 1;
	else
		cout << 0;
	if(r_c == x_c && r_p == x_p)
		cout << 1;
	else
		cout << 0;
	if(r_c == x_c && r_p == x_p)
	{
		if(chk(r_t) == chk(x_t))
			cout << 1;
		else
			cout << 0;
	}
	else
		cout << 0;
	if(r_c == x_c && r_p == x_p)
	{
		if(chk(r_t) == chk(x_t) && chk_beside(r_t[0], x_t[0]))
			cout << 1;
		else
			cout << 0;
	}
	else
		cout << 0;
	return 0;
}
