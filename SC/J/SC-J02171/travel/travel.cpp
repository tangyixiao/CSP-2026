#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string c1, s1, c2, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	if(c1 == c2){
		cout << 1;
	}
	else cout << 0;
	if(c1 == c2 && s1[0] == s2[0] && s1[1] == s2[1]){
		cout << 1;
	}
	else cout << 0;
	int a, b;
	if(s1[2] == 'F' || s1[2] == 'D') a = 0;
	else a = 1;
	if(s2[2] == 'F' || s2[2] == 'D') b = 0;
	else b = 1;
	if(c1 == c2 && s1[0] == s2[0] && s1[1] == s2[1] && a == b){
		cout << 1;
	}
	else cout << 0;
	if(c1 == c2 && s1[0] == s2[0] && s1[1] == s2[1] && a == b && abs(int(s1[2]) - int(s2[2])) == 1){
		cout << 1;
	}
	else cout << 0;
	return 0;
} 