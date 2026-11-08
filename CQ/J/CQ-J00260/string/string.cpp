#include <iostream>
#include <string>
using namespace std;
const int N = 2e5 + 10;
int n, m, a, ans;
char c;
string s = "";
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(int i = 1 ; i <= n ; i++){
		cin >> a >> c;
		for (int j = 0 ; j < a ; j++){
			s += c;
		}
	}
	if (s.length() / 2 * 2 < s.length()) m = s.length() / 2 + 1;
	else m = s.length() / 2;
	const int M = m;
	for (int i = 0 ; i < M ; i++){
		if (s[i] != s[s.length() - i - 1]){
			ans++;
		}
	}
	cout << ans;
	return 0;
}
