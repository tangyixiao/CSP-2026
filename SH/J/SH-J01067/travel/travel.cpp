#include <bits/stdc++.h>
using namespace std;
string at;
string ast;
string bt;
string bst;
int main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> at >> ast >> bt >> bst;
	int ax = stoi(ast.substr(0, 2)), bx = stoi(bst.substr(0, 2));
	char ay = ast[2], by = bst[2];
	//cout << ax << " " << bx << " " << ay << " " << by << endl;
	if (stoi(at) == stoi(bt)){
		cout << 1;
		if (ax == bx){
			cout << 1;
			if (((ay >= 'A' && ay <= 'C') && (by >= 'A' && by <= 'C')) || ((ay == 'D' || ay == 'F') && (by == 'D' || by == 'F'))){
				cout << 1;
				if (abs(ay - by) == 1) cout << 1;
				else cout << 0;
			}
			else cout << "00";
		}
		else cout << "000";
	}
	else cout << "0000";
	return 0;
}
