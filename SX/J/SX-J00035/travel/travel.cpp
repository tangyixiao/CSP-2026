#include <bits/stdc++.h>
using namespace std;
int a, b; //a小r车厢号，b小x车厢号
int c, d; //c小r座位号排数，d小x座位号排数
char e, f;
int flag;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> a >> c >> e >> b >> d >> f;
	if (a == b) {
		flag++;
		if (c == d) {
			flag++;
			if (c == d) {
				if ((e == 'F' and f == 'D') or (e == 'C' and f == 'B') or (e == 'C' and f == 'A') or (e == 'B' and f == 'A')
				        or (e == 'B' and f == 'C') or (e == 'A' and f == 'C') or (e == 'A' and f == 'B')) {
					flag++;
					if ((e == 'F' and f == 'D') or (e == 'C' and f == 'B') or (e == 'B' and f == 'A')
					        or (e == 'B' and f == 'C') or (e == 'A' and f == 'B')) {
						flag++;
					} else {
						cout << "1110";
					}
				} else {
					cout << "1100";
				}
			}
		} else {
			cout << "1000";
		}
	} else {
		cout << "0000";
	}
	if (flag == 4) {
		cout << "1111";
	}
	return 0;
}