#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string c1, s1, c2, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2){
		if (s1[1] == s2[1] && s1[0] == s2[0]){
			char x = s1[2], y = s2[2];
			int fx = 0, fy = 0;
			if (x == 'D') fx = 1;
			if (x == 'F') fx = 1;
			if (y == 'D') fy = 1;
			if (y == 'F') fy = 1;
			if (fx == fy){
				if (fx == 0){
					if (abs(x - y) == 1){
						cout << "1111";
					}
					else{
						cout << "1110";
					}
				}
				else{
					cout << "1111";
				}
			}
			else{
				cout << "1100";
			}
		}
		else{
			cout << "1000";
		}
	}
	else{
		cout << "0000";
	}
	return 0;
}
