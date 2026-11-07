#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 5;

long long ans, n, a[N];
char c[N];

int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	
	cin >> n;
	for (int i = 1; i <= n; i ++ ){
		cin >> a[i] >> c[i];
	}
	
	int l = 1, r = n;
	
	while (l < r){
		if (a[l] == a[r]){
			if (c[l] == c[r]){
				l ++ , r -- ;
			}
			else{
				ans += a[l];
				l ++ , r -- ;
			}
		}
		else if(a[l] < a[r]){
			if (c[l] == c[r]){
				a[r] -= a[l];
				l ++ ;
			}
			else{
				a[r] -= a[l];
				ans += a[l];
				l ++ ;
			}
		}
		else{
			if (c[l] == c[r]){
				a[l] -= a[r];
				r -- ;
			}
			else{
				a[l] -= a[r];
				ans += a[r];
				r -- ;
			}
		}
	}
	
	cout << ans;
	
	return 0;
}