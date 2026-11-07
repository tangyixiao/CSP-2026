#include <iostream>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <stack>
#define int unsigned long long
#define F(i, n, m) for(int i = n; i <= m; i++)
#define dF(i, n, m) for(int i = n; i >= m; i--)
using namespace std;
using ll = long long;
using ull = unsigned long long;

int const N = 2e5+5;
int a[N], d[N][32], dc[32];

void print(int id){
	int p = a[id];
	int i = 0;
	while(p) {
		d[id][i] = p%2 ;
		dc[i] += d[id][i++];
		p>>=1;
	}
}
void print1(int id, int l){
	if(d[id][l] == 0) {
		F(i, 1, 31) {
			d[id][i] = 0;
		}return;
	}
	int p = a[id];
	int i = 0;
	while(p) {
		dc[i] += d[id][i++];
		p>>=1;
	}
}

signed main() {
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);

	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
//	freopen("and1.in", "r", stdin);

	int n, m;
	cin >> n >> m;
	F(i, 1, n) {
		cin >> a[i];
		print(i);
	}
	int ans = 0; 
	int ip = 0;
	dF(i, 31, 1) {
		ip = i;
		if(dc[i] >= m) {
//			cout << dc[i] << ' ' << ip << '\n';
			break;
		}
	}
	ans += 1 << (ip-1);
	ip--;
	while(ip) {
		memset(dc, 0, sizeof(dc));
		F(i, 1, n) {
			print1(i, ip);
		}
		int p = 0;
		dF(i, ip, 1) {
			p = i;
			if(dc[i] >= m) {
//				cout << dc[i] << ' ' << p << '\n';
				break;
			}
		}
		ip = p;
		if(ip > 1)ans += 1 << (ip-1);
		ip--;
	}
	cout << ans;
	
//	a[1] = 49152;
//	print(1, 15);
//	dF(i, 31, 1) {
//		cout << dc[i];
//	}
	
	return 0;
}