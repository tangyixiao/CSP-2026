#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 2e5 + 5;

int a[N];
char b[N];

signed main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	string s;
	int n, cnt = 0;
	cin >> n;
	for(int i = 1; i <= n; i++){
		cin >> a[i] >> b[i];
	}
	int ko = 0;
	for(int i = 2; i <= n; i++){
		if(b[i] != b[i - 1]) ko = 1;
	}
	if(ko == 0){
		cout << 0;
		return 0;
	}
	int ok = 0;
	for(int i = 1; i <= n; i++){
		if(a[i] != a[n - i + 1]) ok = 1;
	}
	if(ok == 0){
		for(int i = 1; i <= n / 2; i++){
			if(b[i] != b[n - i + 1]){
				cnt += a[i];
				a[n - i + 1] = a[i];
			} 
		}
		cout << cnt;
		return 0;
	}
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= a[i]; j++){
			s += b[i];
		}
	}
	for(int i = 0; i < s.size(); i++){
		if(s[i] != s[s.size() - i - 1]){
			cnt++;
			s[s.size() - i - 1] = s[i];
		}
	}
	cout << cnt;
	return 0;
}