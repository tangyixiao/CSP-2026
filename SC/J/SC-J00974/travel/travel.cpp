#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string a, b;
	int m, n;
	cin >> m >> a >> n >> b;
	if (m == n){
		cout << 1;
	}else{
		cout << 0; 
	}
	if (m == n){
		int c = 10 * a[0] + a[1];
		int d = 10 * b[0] + b[1];
		if (c == d){
			cout << 1;
		}else{
			cout <<0;
		}
	}else{
		cout << 0;
	}
	int e = a[2];
	int f = b[2];
	if (e == 68){
		e++;
	}
	if (f == 68){
		f++;
	}
	if (m == n){
		int c = 10 * a[0] + a[1];
		int d = 10 * b[0] + b[1];
		if (c == d){
			if ((e >= 65 && e <= 67) && (f >= 65 && f <= 67)){
				cout << 1;
			}else if ((e >= 69 && e <= 70) && (f >= 69 && f <= 70)){
				cout << 1;
			}else {
				cout << 0;
			}
		}else{
			cout << 0;
		}
	}else{
		cout << 0;
	}
	if (m == n){
		int c = 10 * a[0] + a[1];
		int d = 10 * b[0] + b[1];
		if (c == d){
			if ((e >= 65 && e <= 67) && (f >= 65 && f <= 67)){
				if ((e + 1 == f ||  e - 1 == f) && (f + 1 == e ||  f - 1 == e)){
					cout << 1;
				}else{
					cout << 0;
				}
			}else if ((e >= 69 && e <= 70) && (f >= 69 && f <= 70)){
				if ((e + 1 == f ||  e - 1 == f) && (f + 1 == e ||  f - 1 == e)){
					cout << 1;
				}else{
					cout << 0;
				}
			}else {
				cout << 0;
			}
		}else{
			cout <<0;
		}
	}else{
		cout << 0;
	}
	return 0;
} 