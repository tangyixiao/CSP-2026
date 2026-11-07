#include <bits/stdc++.h>
using namespace std;
string s1, s2, s3, s4, a, b;
int n, m, f1, f2, f3;
int main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> s1 >> s2 >> s3 >> s4;
	if(s1 == s3){
		f1 = 1;
		cout << 1;
	}else{
		cout << 0;
	}
	for(int i = 0;i <= 1;i++){
		a += s2[i];
		b += s4[i];
	}
	if(a == b && f1){
		f2 = 1;
		cout << 1;
	}else{
		cout << 0;
	}
	n = s2[2] - 'A';
	m = s4[2] - 'A';
	if(n > m){
		swap(n, m);
	}
	if(n == 3 && m == 4 && f2){
		cout << 1;
		f3 = 1;
	}else if(m <= 2 && f2){
		cout << 1;
		f3 = 1;
	}else{
		cout << 0;
	}
	if(m - n == 1 && m != 3 && f3){
		cout << 1;
	}else{
		cout << 0;
	}
	return 0;
} 
