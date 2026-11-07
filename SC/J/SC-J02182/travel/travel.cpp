#include <bits/stdc++.h>
#define int long long
#define fp(i,a,b) for(int i=a;i<=b;i++)
#define pf(i,a,b) for(int i=a;i>=b;i--)
using namespace std;

string a, b, c, d, ans;
int to[128];
int t[128];
string x, y;

signed main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	to[(int)'A'] = to[(int)'B'] = to[(int)'C'] = 1;
	to[(int)'D'] = to[(int)'F'] = 2;
	t[(int)'A'] = 5, t[(int)'B'] = 6, t[(int)'C'] = 7;
	t[(int)'D'] = 114, t[(int)'F'] = 115;
	cin>>a>>b>>c>>d;
	if(a == c) {
		x.push_back(b[0]);
		x.push_back(b[1]);
		y.push_back(d[0]);
		y.push_back(d[1]);
		if(x == y) {
			ans = "11";
			if(to[(int)b[2]] == to[(int)d[2]]) ans.push_back('1');
			else ans.push_back('0');
			if(abs(t[(int)b[2]] - t[(int)d[2]]) == 1) ans.push_back('1');
			else ans.push_back('0');
		} else ans = "1000";
	} else ans = "0000";
	cout<<ans;
	return 0;
}
