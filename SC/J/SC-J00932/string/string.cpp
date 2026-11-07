#include <iostream>
#include <string>
using namespace std;

int n;
long long ans; 
string s;

int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);

	cin >> n;
	for (int i = 1; i <= n; i++){
		int num;
		char x;
		cin >> num >> x;
		for (int i = 1; i <= num; i++){
			s += x;
		}
	}
	for (int i = 0; i < s.size() / 2; i++){
		if (s[i] != s[s.size() - i - 1]){
			ans++;
		}
	}
	cout << ans;
	return 0;
}