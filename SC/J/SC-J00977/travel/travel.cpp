#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int MAXN = 1 + 5;
int x(char c) {
	if(c <= 'C') return 1;
	else return 2;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr), cout.tie(nullptr);
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string r1, r2, x1, x2; cin >> r1 >> r2 >> x1 >> x2;
	if(r1 == x1) {
		cout << "1"; 
		if(r2[0] == x2[0] && r2[1] == x2[1]) {
			cout << "1";
			if(x(r2[2]) == x(x2[2])) {
				cout << "1";
				if(abs(r2[2] - x2[2]) == 1) {
					cout << "1";
				}else {
					cout << "0";
				}
			}else {
				cout << "00";
			}
		}else {
			cout << "000";
		}
		
	}else{
		cout << "0000";
	}
	return 0;
} 