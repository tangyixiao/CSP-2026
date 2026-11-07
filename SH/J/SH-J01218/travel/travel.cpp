#include<bits/stdc++.h>
using namespace std;
string c1, s1, c2, s2;
int pai(string s1){
	int a = s1[0] - '0', b = s1[1] - '0';
	int pa = a * 10 + b;
	return pa; 
}
int main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if(c1 == c2) cout << 1;
	else {
		cout << 0 << 0 << 0 << 0;
		return 0;
	}
	if(pai(s1) == pai(s2)) {
		cout << 1;
		char p = s1[2], q = s2[2];
		if((p == 'A' || p == 'B' || p == 'C') && (q == 'A' || q == 'B' || q == 'C')) {
			cout << 1;
			int pp = p - 'A', qq = q - 'A';
			if(abs(pp - qq) == 1) cout << 1;
			else cout << 0;
		}
		else if((p == 'D' || p == 'F') && (q == 'D' || q == 'F')){
			cout << 1 << 1;
		} 
		else cout << 0 << 0;
	}
	else cout << 0 << 0 << 0;
	return 0;
}
