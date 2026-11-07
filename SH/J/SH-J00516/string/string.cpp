#include<bits/stdc++.h>
using namespace std;

int n , a , ans , l;
string s;

int main(){
	freopen("string.in" , "r" , stdin);
	freopen("string.out" , "w" , stdout);
	cin >> n;
	for(int i = 1; i <= n; i++){
		cin >> a;
		l += a;
		char c;
		cin >> c;
		for(int j = 1; j <= a; j++){
			s += c;
		}
	} 
	for(int i = 0; i < l / 2; i++){
		if(s[i] != s[l - i]){
			ans++;
		}
	}
	cout << ans;
	return 0;
}
