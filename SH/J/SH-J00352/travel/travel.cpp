#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#ifdef LOCAL
#define debug(x) x
#else
#define debug(x)
#endif

void FileIO(const char * inf, const char * ouf) {
	freopen(inf, "r", stdin);
	freopen(ouf, "w", stdout);
}

struct Seat {
	int carid = 0;
	int rowid = 0;
	int snt = 0;
	int is_right = 0;
	Seat(const string & X, const string & Y) {
		carid = 10 * (X[0] - '0') + (X[1] - '0');
		rowid = 10 * (Y[0] - '0') + (Y[1] - '0');
		switch (Y[2]) {
			case 'F':
				snt = 5;
				break;
			default:
				snt = (Y[2] - 'A') + 1;
		}
		is_right = (snt >= 4);
	}
};

int main() {
	ios_base::sync_with_stdio(false);
	FileIO("travel.in", "travel.out");
	string c1, c2;
	string s1, s2;
	cin>>c1>>s1>>c2>>s2;
	Seat a(c1, s1), b(c2, s2);
	cout << (a.carid == b.carid) << (a.carid == b.carid && a.rowid == b.rowid) << (a.carid == b.carid && a.rowid == b.rowid && a.is_right == b.is_right)
		 << (a.carid == b.carid && a.rowid == b.rowid && a.is_right == b.is_right && (a.snt == b.snt+1 || b.snt == a.snt+1))<<endl;
}
