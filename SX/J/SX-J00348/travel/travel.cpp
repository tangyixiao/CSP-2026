#include <bits/stdc++.h>
using namespace std;
//#define int long long
string cc1, ss1, cc2, ss2;
bool flag = 0;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> cc1 >> ss1 >> cc2 >> ss2;
//	cout << ss1.size()<<endl;
//	cout << ss1<<endl;
	if (cc1 == cc2)
		cout << 1;
	else {
		cout << 0;
		flag = 1;
	}
	if (flag == 0 && ss1[0] == ss2[0] && ss1[1] == ss2[1])
		cout << 1;
	else {
		cout << 0;
		flag = 1;
	}
	if (flag == 0 && (int)ss1[2] <= 'C' && (int)ss2[2] <= 'C')
		cout << 1;
	else if (flag == 0 && (int)ss1[2] >= 'D' && (int)ss2[2] >= 'D')
		cout << 1;
	else {
		flag = 1;
		cout << 0;
	}
	if (flag == 0 && ((int)ss1[2] - (int)ss2[2] == 1 || (int)ss2[2] - (int)ss1[2] == 1)) {
		cout << 1;
	} else
		cout << 0;
//	cout << endl;
//	cout << ss1[0] << endl << ss1[2];
	return 0;
}
