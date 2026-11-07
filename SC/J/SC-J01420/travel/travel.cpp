#include<bits/stdc++.h>
using namespace std;
bool check(string a, string b, string x, string y){
	if(a != b){
		return false;
	}
	if(x[0] != y[0]){
		return false;
	}
	if(x[1] != y[1]){
		return false;
	}
	if(x[2] <= 'C' && x[2] >= 'A' && y[2] <= 'C' && y[2] >= 'A'){
		if(x[2] - y[2] == 'C' - 'A' || y[2] - x[2] == 'C' - 'A'){
			return false;
		}else{
			return true;
		}
	}else if(x[2] <= 'F' && x[2] >= 'D' && y[2] <= 'F' && y[2] >= 'D' && x[2] != 'E' && y[2] != 'E'){
		return true;
	}
}
int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string c1, c2, s1, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	// 1
	if(c1 == c2){
		cout << 1;
	}else{
		cout << 0;
	}
	// 2
	if(c1 == c2 && s1[0] == s2[0] && s1[1] == s2[1]){
		cout << 1;
	}else{
		cout << 0;
	}
	// 3
	if(c1 == c2 && s1[0] == s2[0] && s1[1] == s2[1] && (((s1[2] <= 'C' && s1[2] >= 'A') && (s2[2] <= 'C' && s2[2] >= 'A')) || ((s1[2] >= 'D' && s1[2] <= 'F' && s1[2] != 'E') && (s2[2] >= 'D' && s2[2] <= 'F' && s2[2] != 'E')))){
		cout << 1;
	}else{
		cout << 0;
	}
	// 4
	if(check(c1, c2, s1, s2)){
		cout << 1;
	}else{
		cout << 0;
	}
	return 0;
}