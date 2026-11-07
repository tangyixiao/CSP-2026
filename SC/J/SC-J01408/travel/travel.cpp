#include <iostream>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <stack>
#define F(i, n, m) for(int i = n; i <= m; i++)
#define dF(i, n, m) for(int i = n; i >= m; i--)
using namespace std;
using ll = long long;
using ull = unsigned long long;

signed main() {
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);

	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	
	string c1, s1, c2, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	bool a = (c1 == c2?1:0);
	bool b = a & (s1[0] == s2[0] && s1[1] == s2[1]?1:0);
	bool c;
	bool d;
	if(b && ((s1[2] <= 'C' && s2[2] <= 'C') || (s1[2] > 'C' && s2[2] > 'C'))) {
		c = 1;
	}else c = 0;
	if(c && ((s1[2] == s2[2]+1) || (s1[2] == s2[2] - 1))) {
		d = 1;
	}else d = 0;
	
	cout << a << b << c << d;	
	
	return 0;
}