#include <bits/stdc++.h>
using namespace std;
string c1, s1, s1z, c2, s2, s2z;
char x, y, n, m;
int a, b;
int main(){
	//freopen("travel.in", "r", stdin);
	//freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin >> c1 >> s1z >> c2 >> s2z;
	s1[0] = s1z[0], s1[1] = s1z[1], s2[0] = s2z[0], s2[1] = s2z[1];
	x = s1z[3], y = s2z[3];
	if(x == 'A') a = 1;
	else if(x == 'B') a = 2;
	else if(x == 'C') a = 3;
	else if(x == 'D') a = 4;
	else if(x == 'F') a = 5;
	
	if(y == 'A') b = 1;
	else if(y == 'B') b = 2;
	else if(y == 'C') b = 3;
	else if(y == 'D') b = 4;
	else if(y == 'F') b = 5;
	
	if(c1[0] == c2[0] && c1[1] == c2[1]) cout << 1;
	else{
		cout << 0 << 0 << 0 << 0;
		return 0;
	}
	
	if(s1[0] == s2[0] && s1[1] == s2[1]) cout << 1;
	else{
		cout << 0 << 0 << 0;
		return 0;
	}
	
	if(a + b == 9)cout << 1;
	else if(a + b <= 5){
		if(a != 1 && b != 4) cout << 1;
		else if(a != 4 && b != 1) cout << 1;
		else cout << 0;
	}
	else cout << 0;
	
	if(a - b != 1 && b - a != 1) cout << 1;
	else{
		if(a != 3 && b != 4) cout << 1;
		else if(a != 4 && b != 3){
			cout << 1;
			return 0;
		}
		else cout << 0;
	}
	return 0;
}