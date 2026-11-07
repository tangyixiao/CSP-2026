#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
typedef long long ll;
ll n, m;
const ll maxn = 5005;
const ll maxm = 3005;
struct node {
	ll rank;
	ll num;
};
ll a[maxn];
node b[maxn];
ll c[maxn];
ll bb[maxn];
ll l, r; 
/*
4 3
1 2 1 3
10 3
3 1 2 1 3 2 3 1 2 1

*/
int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	l = 1; r = 1;
	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= n; j++) {
			c[j] = a[j];
			b[c[j]].num++;	
			if (b[c[j]].num == 2) {
				b[c[j]].num = 1;
				for (int k = l; k <= j - 1; k++) {
					c[k] = -1;
					b[c[j]].num = 0;
				}
				l = b[c[j]].rank;
			}
			b[c[j]].rank = j;
		}
		for (int j = i; j <= n; j++) {
			if (c[j] != -1) {
				bb[c[j]]++;
			}
			//cout << c[j] << (j == n ? '\n' : ' ');
		}
		memset(c, 0, sizeof(c));
		memset(b, 0, sizeof(b));
		l = r = 1;
	}
	for (int i = 1; i <= m; i++) {
		cout << bb[i] << " ";
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
