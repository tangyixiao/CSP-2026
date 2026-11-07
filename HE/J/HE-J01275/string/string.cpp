#include<bits/stdc++.h>
using namespace std;
long long n , x , len;
long long ans;
string s;
char c;
int main() {
	freopen("string.in" , "r" , stdin);
	freopen("string.out" , "w" , stdout);
	cin >> n;
	while(n--) {
		cin >> x >> c;
		len += x;
		for(int i = 1;i <= x;i++) {
			s += c;
		}
	}
	for(int i = 0;i <= len / 2;i++) {
		if(s[i] != s[len - i - 1]) {
			ans ++;
		}
	}
	cout << ans;
	
	return 0;
}
