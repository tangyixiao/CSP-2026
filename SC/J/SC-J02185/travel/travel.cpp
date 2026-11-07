#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	vector<char> c(10);
	for (int i = 0; i < 10; i++) cin >> c[i];
	bool a = false, b = false;
	if (c[0] == c[5] && c[1] == c[6]) cout << "1", a = true;
	else cout << "0";
	if (a == true && c[2] == c[7] && c[3] == c[8]) cout << "1", b = true;
	else cout << "0";
	if (b == true && (((c[4] == 'D' && c[9] == 'F')||(c[4] == 'F' && c[9] == 'D'))||((c[4] == 'C' && c[9] == 'B')||(c[4] == 'B' && c[9] == 'A')||(c[4] == 'A' && c[9] == 'B')||(c[4] == 'B' && c[9] == 'C')))){
		cout << "11";
	} else if (b == true && ((c[4] == 'A' && c[9] == 'C')||(c[4] == 'C' && c[9] == 'A'))) cout << "10";
	else cout << "00";
	return 0;
}