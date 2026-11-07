#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n, a;
	char c;
	string s;
	cin >> n;
	for(int i = 1; i <= n; i++){
		cin >> a >> c;
		for(int j = 1; j <= a; j++){
			s += c;
		}
	}
	int l = s.length();
	long long cnt = 0;
	for(int i = 0; 2*i < l; i++){
		if(s[i] != s[l-i-1]){
			s[l-i-1] = s[i];
			cnt++;
		}
	}
	cout << cnt;
	return 0;
}
