#include <bits/stdc++.h>
using namespace std;
int sum = 0;
string a, b, c, d;
bool flag1 = 0, flag2 = 0, flag3 = 0;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> a >> b >> c >> d;
	if (a[0] == c[0] && a[1] == c[1]) {
		sum++;
	}
	if (sum == 1) {
		cout << "1";
		flag1 = 1;
	} else {
		cout << "0000";
	}//第一个问题
	sum = 0;
	if (flag1 == 1) {
		if (b[0] == d[0] && b[1] == d[1]) {
			sum++;
		}
		if (sum == 1) {
			cout << "1";
			flag2 = 1;
		} else {
			cout << "000";
		}
	}//第二个问题
	if (flag1 == 1 && flag2 == 1) {
		if ((b[2] == 'A' && d[2] == 'B') || (b[2] == 'A' && d[2] == 'C' ) || ( b[2] == 'B' && d[2] == 'C') || ( b[2] == 'D'
		        && d[2] == 'F' ) || (b[2] == 'B' && d[2] == 'A') || ( b[2] == 'C' && d[2] == 'A' ) || ( b[2] == 'C' && d[2] == 'B')
		        || ( b[2] == 'F'
		             && d[2] == 'D')) {
			cout << "1";
			flag3 = 1;
		} else {
			cout << "00";
		}
	}
	//第三个问题
	if (flag1 == 1 && flag2 == 1 && flag3 == 1) {
		if ((b[2] == 'A' && d[2] == 'B') || ( b[2] == 'B' && d[2] == 'C') || (b[2] == 'D' && d[2] == 'F') || ( b[2] == 'B'
		        && d[2] == 'A') || (b[2] == 'C' && d[2] == 'B') || (b[2] == 'F' && d[2] == 'D') ) {
			cout << "1";
		} else
			cout << "0";//第四个问题
	}
	return 0;
}