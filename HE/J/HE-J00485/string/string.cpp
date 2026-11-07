#include <bits/stdc++.h>
using namespace std;
int n , q , cnt;
string s;
int main () {
	freopen ("string.in" , "r" , stdin);
	freopen ("string.out" , "w" , stdout);
	cin >> n;
	for (int i = 1; i <= n; i++){
		long long a; 
		cin >> a;
		string b;
		cin >> b;
		for (int j = 1; j <= a; j++){
			s+=b;
		}
	}
	q = s.length();
	if( q % 2 == 0){
		for (int i = 0; i < q / 2; i++){
			if (s[i] != s[q - 1 - i]){
				s[i] = s[q - 1 - i];
				cnt++;
			}
		}
	}else {
		for (int i = 0; i < (q - 1) / 2; i++){
			if (s[i] != s[q - i]){
				s[i] = s[q - i];
				cnt++;
			}
		}
	}
	cout <<cnt;
	return 0;
} 
