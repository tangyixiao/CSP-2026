#include <bits/stdc++.h>
using namespace std;
string c1, s1, c2, s2;
int main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2){
		cout << 1;
		if (s1.substr(0, s1.size()-1) == s2.substr(0, s2.size()-1)){
			cout << 1;
			char ch1 = s1[s1.size()-1];
			char ch2 = s2[s2.size()-1];
			if (ch1 <= 'C' && ch2 <= 'C' || ch1 > 'C' && ch2 > 'C'){
				cout << 1;
				if (abs(ch1-ch2) == 1 || ch1 == 'D' && ch2 == 'F' || ch1 == 'F' && ch2 == 'D'){
					cout << 1 << endl;
				}else{
					cout << 0 << endl;
				}
			}else{
				cout << "00" << endl;
			}
		}else{
			cout << "000" << endl;
		}
	}else{
		cout << "0000" << endl;
	}
	return 0;
}
