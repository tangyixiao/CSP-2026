#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 5;
char a[N];
int ans[N];
int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++){
		cin >> a[i];
	}
	string s;
	for (int i = 1; i <= n; i++){
		s = "";
		for (int j = i; j <= n; j++){
			int f = -1;
			for (int k = 0; k <= s.size(); k++){
				if (s[k] == a[j]) f = k;
			}
			if (f >= 1) s.erase(f - 1);
			else if (f == 0) s = "";
			s += a[j];
		}
		for (int i = 0; i < s.size(); i++){
			ans[s[i] - '0']++;
		}
	}
	for (int i = 1; i <= m; i++){
		cout << ans[i] << ' '; 
 	}
	return 0;
}
