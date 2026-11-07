#include <iostream>
#include <string>
using namespace std;
string a, b, c, d;
int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> a >> b >> c >> d;
	if (a != c) cout << "0000";
	else {
		cout << 1;
		if (b[0] != d[0] || b[1] != d[1]) cout << "000";
		else {
			cout << 1;
			if ((b[2] > 'C') != (d[2] > 'C')) cout << "00";
			else {
				cout << 1;
				//cout << endl << b[2] << ' ' << d[2] << endl;
				int x = b[2] - d[2];
				//cout << endl << x << endl;
				if (x == 1 || x == -1) cout << 1;
				else cout << 0;
			}
		}
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
} 