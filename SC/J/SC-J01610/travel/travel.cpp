#include <bits/stdc++.h>
using namespace std;
int q, w;
int main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string c1, s1, c2, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	
	if(c1[0] == c2[0] && c1[1] == c2[1]){
		cout << "1";
	}else{
		cout << "0000";
		return 0;
	}
	
	if(s1[0] == s2[0] && s1[1] == s2[1]){
		cout << "1";
	}else{
		cout << "000";
		return 0;
	}
	
	if(s1[2] - 'A' + 1 <= 3 && s1[2] - 'A' + 1 >= 1){
		q = 1;
	}else{
		q = 0;
	}
	if(s2[2] - 'A' + 1 <= 3 && s2[2] - 'A' + 1 >= 1){
		w = 1;
	}else{
		w = 0;
	}
	if(q == w){
		cout << "1";
	}else{
		cout << "00";
		return 0;
	}
	
	int x = s1[2] - 'A' + 1;
	int y = s2[2] - 'A' + 1;
	if(abs(x - y) == 1 || s1[2] == 'F' && s2[2] == 'D' || s2[2] == 'F' && s1[2] == 'D'){
		cout << 1;
	}else{
		cout << 0;
	}
	
	return 0;
}