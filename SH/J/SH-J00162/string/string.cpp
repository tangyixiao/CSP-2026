#include <bits/stdc++.h>
using namespace std;
 
int a[100005], x = 1, cnt;
char c[100005]; 
string s;
 
int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	cin >> n;
	for(int i = 1; i <= n; i++){
		cin >> a[i] >> c[i];
		for(int j = 1; j <= a[i]; j++){
			s[x++] = c[i];
		}
	}
	for(int i = 0; i < x / 2; i++){
		cout << s[i];
		if(s[i] != s[x - i - 1]) cnt++;
	}
	cout << cnt;
	return 0;
}
