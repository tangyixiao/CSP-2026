#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string c1, s1, c2, s2; cin >> c1 >> s1 >> c2 >> s2;
	if(c1 != c2){
		cout << "0000";
		return 0;
	}
	else if(s1[0] != s2[0] || s1[1] != s2[1]){
		cout << 1000;
		return 0;
	}
	char cc1 = s1[2], cc2 = s2[2];
	if(cc1 <= 'C' && cc2 <= 'C'){
		cout << 111;
		if(cc1 - cc2 == 1 || cc2 - cc1 == 1)	cout << 1;
		else	cout << 0;
	}
	else if(cc1 >= 'D' && cc2 >= 'D'){
		cout << 1111;
	}
	else{
		cout << 1100; 
	}
	return 0;
}