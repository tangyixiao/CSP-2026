#include<bits/stdc++.h>
using namespace std;
int n, num, num1, num2;
char c, c1, c2;
string s;

bool hw(string x){
	string y = x;
	reverse(x.begin(), x.end());
	for(int i = 0; i < x.size(); i++){
		if(x[i] != y[i]) return false;
	}
	return true;
}

int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	
	cin >> n;
	if(n == 2){
		cin >> num1 >> c1 >> num2 >> c2;
		if(c1 == c2 || num1 == num2){
			cout << 0;
			return 0;
		}else{
			cout << min(num1, num2);
			return 0;
		}
	}
	while(n--){
		cin >> num >> c;
		for(int i = 1; i <= num; i++) s += c;
	}
	if(hw(s) && n <= 1) {cout << 0; return 0;}
	cout << 1;
	return 0;
}
