#include<bits/stdc++.h>
using namespace std;
int a, b;
string as, bs;
int main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> a >> as >> b >> bs;
	if (a != b){
		cout << "0000\n";
	}
	else {
		cout << 1;
		int al = 0, bl = 0;
		al = 10 * (as[0] - '0') + (as[1] - '0');
		bl = 10 * (bs[0] - '0') + (bs[1] - '0');
		if (al != bl){
			cout << "000\n";
		}
		else {
			cout << 1;
			char ac = as[2], bc = bs[2];
			if (ac == 'A' && bc == 'B' || ac == 'A' && bc == 'C' || ac == 'B' && bc == 'C' || ac == 'E' && bc == 'F'){
				cout << 1;
				if (ac + 1 == bc || bc + 1 == ac) cout << 1 << '\n';
				else cout << 0 << '\n';
			}
			else {
				swap(ac, bc);
				if (ac == 'A' && bc == 'B' || ac == 'A' && bc == 'C' || ac == 'B' && bc == 'C' || ac == 'E' && bc == 'F'){
					cout << 1;
					if (ac + 1 == bc || bc + 1 == ac) cout << 1 << '\n';
					else cout << 0 << '\n';
				}
				else cout << "00\n";
			}
		}
	}
	return 0;
}
