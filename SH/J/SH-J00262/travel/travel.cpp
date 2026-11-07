#include <bits/stdc++.h>
using namespace std;

int main()
{
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string mm, a, nn, b;
	cin >> mm >> a >> nn >> b;
	if (mm==nn)
	{
		cout << "1";
	}
	else{
		cout << "0000" << endl;
		return 0;
	} 
	if (a[0] == b[0] && a[1] == b[1]) {
		cout << "1";
	}
	else{
		cout << "000" << endl;
		return 0;
	} 
	bool flaga = false, flagb = false;
	if (a[2] >= 'A' && a[2] <= 'C') flaga = true;
	if (b[2] >= 'A' && b[2] <= 'C') flagb = true;
	if (flaga == flagb) {
		cout << "1";
	}
	else{
		cout << "00" << endl;
		return 0;
	} 
	if (flaga == false) {
		cout << "1";
		return 0;
	}
	if ((a[2] == 'A' && b[2] == 'C') || (a[2] == 'C' && b[2] == 'A'))
	{
		cout << "0";
	}
	else cout << "1";
	return 0;
 } 
