#include <bits/stdc++.h>
using namespace std;
int a, b, c, d;
char e, f;
signed main (){
	freopen("travel.in", "r", stdin); freopen("travel.out", "w", stdout);
	// ios::sync_with_stdio(false); cin.tie(nullptr);
	cin >> a >> b >> e >> c >> d >> f;
	if(a == c){
		cout << "1";
		if(b == d){
			cout << "1";
			if((e <= 'C' && f <= 'C') || (e > 'C' && f > 'C')){
				cout << "1";
				if(abs(e - f) == 1){
					cout << "1\n";
					return 0;
				} else {
					cout << "0\n";
					return 0;
				}
			} else {
				cout << "00\n";
				return 0;
			}
		} else {
			cout << "000\n";
			return 0;
		}
	} else {
		cout << "0000\n";
		return 0;
	}
	return 0;
}
