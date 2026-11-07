#include <bits/stdc++.h>
using namespace std;


int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	int cxa, cxb;
	string zha, zhb;
	cin >> cxa >> zha >> cxb >> zhb;
	int fa = 0, fb = 0, fc = 0, fd = 0;
	if (cxa == cxb)
		fa = 1;
	if (fa == 1 && zha[0] == zhb [0] && zha[1] == zhb [1])
		fb = 1;
	while (fb == 1) {
		if (zha[2] == 'A' && zhb[2] == 'B' || zhb[2] == 'C')
			fc = 1;
		if (zha[2] == 'B' && zhb[2] == 'A' || zhb[2] == 'C')
			fc = 1;
		if (zha[2] == 'C' && zhb[2] == 'A' || zhb[2] == 'B')
			fc = 1;
		if (zha[2] == 'D' && zhb[2] == 'F')
			fc = 1;
		if (zha[2] == 'F' && zhb[2] == 'D')
			fc = 1;
		if (zha[2] == 'A' && zhb[2] == 'B')
			fd = 1;
		if (zha[2] == 'B' && zhb[2] == 'A')
			fd = 1;
		if (zha[2] == 'B' && zhb[2] == 'C')
			fd = 1;
		if (zha[2] == 'C' && zhb[2] == 'B')
			fd = 1;
		if (zha[2] == 'D' && zhb[2] == 'E')
			fd = 1;
		if (zha[2] == 'E' && zhb[2] == 'D')
			fd = 1;
		break;
	}
	cout << fa << fb << fc << fd;
	return 0;
}
