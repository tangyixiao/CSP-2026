#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	long long ans = 0;
	string s;
	long long n;
	cin >> n;
	for(int i = 0; i < n; i++){
		long long tmp;
		char a;
		cin >> tmp >> a;
		for(int i = 0; i < tmp; i++){
			s += a;
		}
	}
	string tmp_s = s;
	reverse(s.begin(), s.end());
	for(int i = 0; i < s.length(); i++){
		if(s[i] != tmp_s[i]){
			ans++;
		}
	}
	cout << ans / 2;
	return 0;
}
