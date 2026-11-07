#include <bits/stdc++.h>
using namespace std;
const int maxn = 2e5 + 5;
int a[maxn]; string c[maxn];
int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n;
	long long cnt = 0, L = 0;
	cin >> n;
	string s;
	for(int i = 0; i < n; i++){
		cin >> a[i] >> c[i];
		for(int j = 0; j < a[i]; j++) s += c[i];
		L += a[i];
	}
	for(long long i = 0; i < s.size() / 2; i++){
		if(s[i] != s[s.size() - i - 1]) cnt++;
	}
	cout << cnt;
	return 0;
}

