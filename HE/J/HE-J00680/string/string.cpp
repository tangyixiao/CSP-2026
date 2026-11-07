#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 2e5 + 5;
const int M = 1e6 + 5;

int n;
int a[N];
char c[N];
char s[M];

signed main(){
	freopen("string.in", "r", stdin);
	freopen("string.ont", "w", stdout);
	
	cin >> n;
	
	int len = 0;
	int l = 0, r = 0;
	for(int i = 1; i <= n; i++){
		cin >> a[i] >> c[i];
		len += a[i];
		l = r + 1;
		r += a[i];
		for(int j = l; j <= r; j++){
			s[j] = c[i];
		}
	}
		
	int mid = ceil(len * 1.0 / 2);
	int ans = 0;
	for(int i = mid+1; i <= len; i++){
		if(s[i] != s[1+len-i]) ans++;
	}
	cout << ans;
	
	return 0;
}
/*
3
2 a
2 b
1 c

2
2 a
3 a

6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b
*/
