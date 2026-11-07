#include <bits/stdc++.h>
using namespace std;
string xiang1;
string xiang2;
string zhuo1;
string zhuo2;
bool budui = 0;

signed main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> xiang1 >> zhuo1 >> xiang2 >> zhuo2;



	if (xiang1 == xiang2)
		cout << 1;
	else {
		cout << "0000";
		return 0;
	}





	if (zhuo1[0] == zhuo2[0] && zhuo1[1] == zhuo2[1])
		cout << 1;
	else {

		cout << "000";
		return 0;
	}





	if ((zhuo1[2] == 'D' && zhuo2[2] == 'F' ) || (zhuo1[2] == 'F' && zhuo2[2] == 'D'))
		cout << 1;
	else if ((zhuo1[2] == 'C' && zhuo2[2] == 'B' ) || ( zhuo1[2] == 'B' && zhuo2[2] == 'C'))
		cout << 1;
	else if ((zhuo1[2] == 'A' && zhuo2[2] == 'B' ) || ( zhuo1[2] == 'B' && zhuo2[2] == 'A'))
		cout << 1;
	else if ((zhuo1[2] == 'A' && zhuo2[2] == 'C' ) || ( zhuo1[2] == 'C' && zhuo2[2] == 'A')) {
		budui = 1;
		cout << 1;
	} else {
		cout << "00";
		return 0;
	}

	if (budui == 1) {
		cout << "0";
		return 0;
	} else
		cout << 1;



	return 0;
}
