#include<bits/stdc++.h>
using namespace std;
int n, a, p, ans;
char c;
char s[200005];
int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for(int i = 1; i <= n; i++){
		cin >> a >> c; 
	//	cout << a << c;
		for(int j = 1; j <= a; j++){
			s[++p] = c;
		}
	}
	for(int i = 1; i <= (p + 1) / 2; i++){
		if(s[i] != s[p - i + 1]){
			ans++;
		}
	}
	cout << ans;
	return 0;
}
