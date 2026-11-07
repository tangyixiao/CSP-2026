#include<iostream>
using namespace std;

int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	
	string s;
	int n; cin>>n;
	for (int i = 1; i <= n; i++){
		int x; char c; cin>>x>>c;
		s = s + string(x, c);
	}
	
	long long len = (long long)s.length(), ans = 0;
	for (long long i = 0; i <= len / 2 - 1; i++){
		if (s[i] != s[len - i - 1]) ans++;
	} 
	cout<<ans;
	return 0;
}
