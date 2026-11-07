#include<bits/stdc++.h>
#define N 5050000
#define M 2020
#define ll long long
using namespace std;
ll n, m, a[N], b[N], c[N], r, l = 1;
bool book[N];
int main(){
	cin.tie(0);
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for ( int i = 1; i <= n; i++ ){
		cin >> a[i];
	}
	while ( l <= n ){
		for ( int i = l; i <= n; i++ ){
			if ( book[a[i]] == 1 ){
				while ( c[r] != a[i] ){
					book[c[r]] = 0;
					c[r] = 0;
					r--;
				}
				book[a[i]] = 1;
			}else{
				r++;
				c[r] = a[i];
				book[a[i]] = 1;
			}
		}
		for ( int j = 1; j <= r; j++ ){
			b[c[j]]++;
		}
		for ( int j = 1; j <= r; j++ ){
			c[j] = 0;
		}
		for ( int j = 1; j <= m; j++ ){
			book[j] = 0;
		}
		r = 0;
		l++;
	}
	for ( int i = 1; i <= m; i++ ){
		cout << b[i] << " ";
	}
	return 0;
}