#include <bits/stdc++.h>
using namespace std;
string a, b, c, d;
string sts;
long long isb, isd;

int main() {

	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);

	cin >> a >> b >> c >> d;
	//是否车厢相同
	if (a == c)
		sts = sts + '1';
	else
		sts = sts + '0';

	//是否同排
	if (b[0] == d[0] and b[1] == d[1] and a == c) {
		sts = sts + '1';
	} else {
		sts = sts + '0';
	}

	//是否位于过道同侧
	if (b[2] == 'A' or b[2] == 'B' or b[2] == 'C')
		isb = 1;
	else
		isb = 2;
	if (d[2] == 'A' or d[2] == 'B' or d[2] == 'C')
		isd = 1;
	else
		isd = 2;
	if (isb == isd and a == c and b[0] == d[0] and b[1] == d[1])
		sts = sts + '1';
	else
		sts = sts + '0';

	//是否相邻【排相等 车厢相同 同侧】
	if (int(b[2]) - int(d[2]) == 1 or int(d[2]) - int(b[2]) == 1) {
		if (isb == isd and a == c and b[0] == d[0] and b[1] == d[1])
			sts = sts + '1';
		else
			sts = sts + '0';
	} else {
		sts = sts + '0';
	}

	cout << sts;

	return 0;
}