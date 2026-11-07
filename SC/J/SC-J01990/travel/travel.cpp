#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
int turn(string s) {
	int k = 0;
	for (int i = 0;i < 2;i++) {
		k = k*10 + (s[i]-'0');
	}
	return k;
}
void solve() {
	string scr,ssr,scx,ssx;
	cin>>scr>>ssr>>scx>>ssx;
	int cr = turn(scr);int sr = turn(ssr);int cx = turn(scx);int sx = turn(ssx);
	if (cr == cx) cout<<"1";
	else {
		cout<<"0000";
		return ;
	}
	if (sr == sx) cout<<"1";
	else {
		cout<<"000";
		return ;
	}
	char r = ssr[2];char x = ssx[2];
	if ('A' <= r && 'C' >= r && 'A' <= x && 'C' >= x || x == 'D' && r == 'F' || x == 'F' && r == 'D') {
		cout<<"1";
	} else {
		cout<<"00";
		return ;
	}
	if (x-r == 1 || r-x == 1 || x == 'D' && r == 'F' || x == 'F' && r == 'D') {
		cout<<"1";
	} else {
		cout<<"0";
	}
}
int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int T = 1;
	while (T--) {
		solve();
	}
	fclose(stdin);fclose(stdout);
	return 0;
}