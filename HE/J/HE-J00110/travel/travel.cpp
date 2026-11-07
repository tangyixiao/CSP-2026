#include <bits/stdc++.h>
using namespace std;
int ans[105];
char c1[105], s1[105], c2[105] ,s2[105];
int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "a", stdout);
	for(int i = 1; i <= 2 ;i ++) cin >> c1[i];
	for(int i = 1; i <= 3 ;i ++) cin >> s1[i];
	for(int i = 1; i <= 2 ;i ++) cin >> c2[i];
	for(int i = 1; i <= 3 ;i ++) cin >> s2[i];
	if (c1[2] == c2[2] && c1[1] == c2[1]) cout << "1";
	else{
		cout << "0000";
		return 0; 
	}
	if (s1[1] == s2[1] && s1[2] == s2[2]) cout << "1"; 
	else{
		cout << "000";
		return 0 ;
	}
	if (((s1[3] == 'A' || s1[3] == 'B' || s1[3] == 'C') && (s2[3] == 'A' || s2[3] == 'B' || s2[3] == 'C')) || ((s1[3] == 'D' || s1[3] == 'F') && (s2[3] == 'D'))) cout << "1";
	else{
		cout << "00";
		return 0;
	} 
	if (s1[3] != 'F' && s2[3] != 'F' && s1[3] != 'D' && s2[3] != 'D'){
		if(s1[3] - 1 == s2[3] || s2[3] - 1 == s1[3]) cout << "1";
		else cout << "0";
	}
	else cout << "1";
	return 0;
} 
