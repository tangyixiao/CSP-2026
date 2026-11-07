#include <bits/stdc++.h>
using namespace std;

string c1, s1, c2, s2;

int main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	
	cin >> c1 >> s1 >> c2 >> s2;
	
	if(c1 == c2) cout << 1;
	else{
		cout << "0000";
		return 0;
	}
	
	string t1 = s1.substr(0, 2);
	string t2 = s2.substr(0, 2);
	if(t1 == t2) cout << 1;
	else{
		cout << "000";
		return 0;	
	}
	
	char x1 = s1[2];
	char x2 = s2[2];
	if((x1 >= 'A' && x1 <= 'C' && x2 >= 'A' && x2 <= 'C') || ((x1 == 'D' || x2 == 'F') && (x2 == 'D' || x2 == 'F'))) cout << 1;
	else{
		cout << "00";
		return 0;	
	}
	
	int cnt = abs(x1 - x2);
	if((x1 == 'D' || x2 == 'F') && (x2 == 'D' || x2 == 'F')) cout << 1;
	else if(cnt == 1){
		cout << 1;
	}else cout << 0;
	
	return 0;
}
