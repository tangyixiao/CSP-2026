#include <bits/stdc++.h>
using namespace std;
const int m = 2e5;
long long a[m];

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,ans = 0;
	string s = "";
	
	cin >> n;
	for (int i = n;i >= 1;i--){
		int num;
		char t;
		cin >> num >> t;
		for (int i = 1;i <= num;i++){
			s += t; 
			a[t-'a'] += num;
		}
	}
	for (int i = 0;i <= (s.size()-1)/2;i++) {
		if (s[i] != s[s.size()-1-i]) ans++;
	}
	cout << ans;
	return 0;
}
