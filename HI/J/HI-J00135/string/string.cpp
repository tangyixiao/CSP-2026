#include <bits/stdc++.h>
using namespace std;

string s;
long long X = 1 , num = 0 , fb = 0 , bf = 1;

bool so(string S1){
	string cs1 , cs2;
	for (int i = 0 ; i < num ; i++){
		cs1 += S1[i];
	}
	for (int j = num-1 ; j >= 0 ; j--){
		cs2 += S1[j];
	}
	if (cs1 == cs2){
		return 1;
	}
	else {
		return 0;
	}
}

void f(string S){
	if (S[fb] == S[num-bf]){
		fb++;
		bf++;
		f(S);
	}
	else {
		S[fb] = S[num-bf];
		if ( so(S) ){
			cout << X;
		}
		else {
			fb++;
			bf++;

			f(S);
		}
	}
}

int main (){
	freopen ("string.in" , "r" , stdin);
	freopen ("string.out" , "w" , stdout);
	int n;
	cin >> n;
	long long a;
	char c;
	for (int i = 1 ; i <= n ; i++){
		cin >> a;
		num += a;
		cin >> c;
		for (int j = 1 ; j <= a ; j++)  s += c;
	}
	
	
	if ( so(s) ){
		cout << 0 << endl;
	}
	else {
		f(s);
	}
	return 0;
} 
