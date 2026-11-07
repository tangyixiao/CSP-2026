#include<bits/stdc++.h>
#define N 202000
#define M 2020
#define ll long long
using namespace std;
ll n, a[N], sum, k, ans;
char c[N], b[1993000000];
int main(){
	cin.tie(0);
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for ( int i = 1; i <= n; i++ ){
		cin >> a[i];
		cin >> c[i];
		sum += a[i];
		for ( int j = 1; j <= a[i]; j++ ){
			k++;
			b[k] = c[i];
		}
	}
	for ( int i = 1; i <= k / 2; i++ ){
		if ( k % 2 == 0 ){
			ll j = k - i + 1;
			if ( b[i] != b[j] ){
				ans++;
			}
		}else{
			ll j = k - i + 1;
			if ( b[i] != b[j] ){
				ans++;
			}
		}
	}
	cout << ans;
	return 0;
}