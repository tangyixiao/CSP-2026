#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string c1, s1, c2, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	if(c1 == c2){
		cout << 1;
		string a, b;
		a = s1[0] + s1[1];
		b = s2[0] + s2[1];
		if(a == b){
			cout << 1;
			a = s1[2];
			b = s2[2];
			if(((a == "A" || a == "B" || a == "C") && (b == "A" || b == "B" || b == "C")) || ((a == "D" || a == "F") && (b == "D" || b == "F"))){
				cout << 1;
				char c = a[0], d = b[0];
				if(c - d == 1 || d - c == 1)
					cout << 1;
				else
					cout << "0";
			}
			else
				cout << "00";
				
		}
		else cout << "000";
	}
	else cout << "0000";
	return 0;
}