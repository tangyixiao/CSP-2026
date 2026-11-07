#include <bits/stdc++.h>
using namespace std;

int n, sum, ans, u[100010];
char s[100010];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	scanf("%d", &n);
	u[1] = 1;
	for (int i = 1; i <= n; i++) {
		int x;
		char ch;
		scanf("%d%c", &x, &ch);
		scanf("%c", &ch);
		sum += x;
		u[i + 1] = u[i] + x;
		s[i] = ch;
	}
	if (sum % 2 == 1) {
		int m = sum / 2 + 1;
		int l = m, r = m;
		while(l != 0 && r != n + 1){
			l--, r++;
			char x, y;
			for (int i = 1; i <= n; i++) 
				if (u[i] <= l && u[i + 1] > l) x = s[i];	
				else if (u[i] <= r && u[i + 1] > r) y = s[i];
			if (x != y) ans++;
		}
		printf("%d", ans);
	}else {
		int l = sum / 2, r = sum / 2 + 1;
		while(l != 0 && r != n + 1) {
			char x, y;
			for (int i = 1; i <= n; i++) 
				if (u[i] <= l && u[i + 1] > l) x = s[i]; 
				else if (u[i] <= r && u[i + 1] > r) y = s[i];  
			if (x != y) ans++;
			l--, r++;
		}
		printf("%d", ans);
	}
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
