#include <bits/stdc++.h>
using namespace std;

int a[200005]; 
char c[200005];
long long sum, cnt;
string s = " ";


int main(){
	freopen("string.in", "r", stdin);
    freopen("string.out", "w", stdout);
	
	int n; cin >> n;
	
	for (int i = 1; i <= n; i ++){
		cin >> a[i] >> c[i];
		sum += a[i];
		int j = a[i];
		while (j --){
			s += c[i];
		}
	}
	
	for (int i = 1; i <= s.size() / 2; i ++){
		char s1 = s[i], s2 = s[s.size() - i];
		if (s1 != s2) cnt ++;
	}
	
	cout << cnt << endl;
	return 0;
} 
