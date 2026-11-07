#include <iostream>
#include <cstdio>
using namespace std;
#define int long long
const int maxn = 2e5 + 5;
int n;
int num[maxn]; char c[maxn];
int sum = 0;
char s[maxn];
signed main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	
	cin >> n;
	for(int i = 1; i <= n; i++) cin >> num[i] >> c[i];
	
	int tot = 0;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= num[i]; j++) s[++tot] = c[i];
	}
	
	int ans = 0;
	for(int i = 1; i <= tot / 2; i++){
		if(s[i] != s[tot - i + 1]) ans++;
	}
	
	cout << ans << '\n';
	return 0;
}
/*
6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b

*/
