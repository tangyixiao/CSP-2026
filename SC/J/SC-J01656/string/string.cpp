#include <bits/stdc++.h> 
using namespace std;
int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n, a, l = 0, z = 0;
	char c;
	string s = "";
	cin >> n;
	while (n--){
		cin >> a >> c;
		l += a;
		for (int i = 0; i < a; i++){
			s = s + c;
		}
	}
	for (int i = 0; i < l / 2; i++){
		if (s[i] != s[l + 1 - i]){
			z++;
		}
	}
	cout << z;
	return 0;
}
