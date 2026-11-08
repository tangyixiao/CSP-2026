#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	
	string a, b, c, d;
	cin >> a >> b >> c >> d;
	string x = b.substr(0, 2);
	string y = d.substr(0, 2);
	char n = b[2];
	char m = d[2];
	if(a == c){
		cout << "1";
		if(x == y){
			cout << "1";
			if(((n == 'D' || n == 'F') && (m == 'D' || m == 'F')) || ((n == 'A'|| n == 'B' || n == 'C') && (m == 'A'|| m == 'B' || m == 'C'))){
				cout << "1";
				if(abs(n - m) == 1){
					cout << "1";
				}
				else cout << "0";
			}
			else{
				cout << "00";
			}
		}
		else{
			cout << "000";
		}
	}
	else{
		cout << "0000";
	}
	return 0;
}
