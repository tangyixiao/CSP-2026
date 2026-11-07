#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout); 
    ios::sync_with_stdio(false);
    cin.tie(0);
    
	int n;
	cin >> n;
	int l = 0;
	string s;
	for(int i = 1; i <= n; ++i){
		int a;
		char c;
		cin >> a >> c;
		l += a;
		for(int j = 1; j <= a; ++j) s += c;
	}
	
	int cnt = 0;
	for(int i = 0; i < l / 2; ++i)
		if(s[i] != s[l - i - 1]) ++cnt;
		
	cout << cnt;
	
    return 0;
}