#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 10;
int n, a[N];
long long ans;
char c[N];
int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for(int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
	}
	int l = 1, r = n;
	while(l <= r) {
		if(c[l] == c[r]) {
			if(a[l] == a[r]) {
				l++,r--;
			}
			else if(a[l] < a[r]) {
				a[r] -= a[l++];
			}
			else {
				a[l] -= a[r--];
			}
		}
		else {
			if(a[l] == a[r]) {
				ans += a[l];
				l++,r--;
			}
			else if(a[l] < a[r]) {
				a[r] -= a[l];
				ans += a[l++];
			}
			else {
				a[l] -= a[r];
				ans += a[r--];
			}
		}
	}
	cout << ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
