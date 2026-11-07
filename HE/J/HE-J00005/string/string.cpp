#include<bits/stdc++.h>
using namespace std;
string s;
int n,len,ans;
int main(){
	freopen("string.in", "r",stdin);
	freopen("string.out", "w",stdout);
	cin >> n;
	for(int i = 1; i <= n; i++){
		int a;
		char c;
		cin >> a >> c;
		len += a;
		while(a--){
			s += c;
		}
	}
	for(int i = 1; i <= len/2; i++){
		if(s[i-1] != s[len - i]){
			ans++;
		}
	}
	cout << ans;
	return 0;
}
