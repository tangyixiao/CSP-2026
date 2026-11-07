#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string r1, r2, s1, s2;
	cin >> r1 >> r2 >> s1 >> s2;
	string r3 = r2.substr(0, 2), s3 = s2.substr(0, 2);
	if (r1 != s1){
		cout << "0000" << endl;
		return 0;
	}else{
		cout << '1';
		if (r3 != s3){
			cout << "000" << endl;
			return 0;
		}else{
			cout << '1';
			if (r2[2] <= 'C' && s2[2] <= 'C' || r2[2] > 'C' && s2[2] > 'C'){
				cout << '1';
				if ((int)(r2[2] - s2[2]) == 1 || (int)(s2[2] - r2[2]) == 1){
					cout << '1';
					return 0;
				}else{
					cout << '0';
				}
			}else{
				cout << "00" << endl;
				return 0;
			}
		}
	}
} 
