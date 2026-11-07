#include<bits/stdc++.h>
#define int long long
using namespace std;

string a, b, c, d;
int st, st1;
bool check(char m, char n) {
	if(m == 'A' || m == 'B' || m == 'C') {
		if(n == 'A' || n == 'B' || n == 'C') {
			return true;
		}
		return false;
	}
	else {
		if(n == 'D' || n == 'F') {
			return true; 
		}
		return false;
	}
}

bool check2(char l, char p) {
	if(l == 'A' || l == 'B' || l == 'C') {
		if(p == 'A' || p == 'B' || p == 'C') {
			if((l + 1) == p && (b[0] == d[0]) && (b[1] == d[1])) {
				return true;
			}
			if((p + 1) == l && (b[0] == d[0]) && (b[1] == d[1])) {
				return true;
			}
			if((st + 1) == st1 && b[2] == d[2]) {
				return true;
			}
			if((st1 + 1) == st && b[2] == d[2]) {
				return true;
			}
			
		}
		return false;
	}
	else {
		if(l == 'D' || l == 'F') {
			if((l + 1) == p && (b[0] == d[0]) && (b[1] == d[1])) {
				return true;
			}
			if((p + 1) == l && (b[0] == d[0]) && (b[1] == d[1])) {
				return true;
			}  
			if((st + 1) == st1 && b[2] == d[2]) {
				return true;
			}
			if((st1 + 1) == st && b[2] == d[2]) {
				return true;
			}
		}
		return false;
	}
	
	
	

	return false;
}

signed main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	cin >> a >> b >> c >> d;// bd
	
	st = (b[0] - '0') * 10 + (b[1] - '0');
	st1 = (d[0] -'0') * 10 + (d[1] - '0');
	//cout << st << ' ' << st1;
	int flag = 0;
	if(a != c) {
		cout << "0000";
		return 0;
	} 
	else {
		cout << 1;
		if((b[0] == d[0]) && (b[1] == d[1])) {// 在一排 
			cout << 1;
		}
		else {
			cout << "00";
			flag = 1;
		}
		
		if(flag == 0){
			bool ck = check(b[2], d[2]);
			if(ck == true){
				cout << 1;
			}
			else {
				cout << "00";
				return 0;
			}
		}
		
		bool ck2 = check2(b[2], d[2]);
		if(ck2 == true) {
			cout << 1;
		}
		else {
			cout << 0;
		}
		
	}
	return 0;
} 