//Pre: 68 (@1-12, 17-21)
#include <iostream>
using namespace std;
string s;
int a, n, cnt = 0;
char c;
int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for(int i = 1; i <= n; i++){
		cin >> a >> c;
		while(a--) s +=c;
	}
	for(int i = 0; i < s.size(); i++){
		if(s[i] != s[s.size() - i - 1]) cnt++, s[s.size() - i - 1] = s[i];
	}
	cout << cnt;
	return 0;
}
