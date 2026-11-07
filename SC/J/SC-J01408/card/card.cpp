#include <iostream>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <stack>
//#define int long long
#define F(i, n, m) for(int i = n; i <= m; i++)
#define dF(i, n, m) for(int i = n; i >= m; i--)
using namespace std;
using ll = long long;
using ull = unsigned long long;

int const N = 2e5+5;
int n, m;

void solve1() {
	vector<int> a(n+1), s(n+1), w(m+1);
	F(i, 1, n) {
		cin >> a[i];
	}
	
	F(i, 1, n) {
		int he = 0;
		F(j, i, n) {
			bool flag = 0;
			F(k, 1, he) {
				if(s[k] == a[j]) {
					flag = 1;
					he = k;
					break;
				}
			}
			if(!flag) {
				s[++he] = a[j];
			}
		}
		F(j, 1, he){
			w[s[j]]++;
//			cout << s[j] << ' ' ;
		}
//		cout << '\n';
	}
	F(i, 1, m) {
		cout << w[i] << ' ';
	}
}

void solve2() {
	vector<int> a(n+1), s(n+1), w(m+1);
	F(i, 1, n) {
		cin >> a[i];
		w[a[i]]=i; 
	}
	F(i, 1, m) {
		cout << w[i] << ' ';
	}
}

signed main() {
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);

	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
//	freopen("card1.in", "r", stdin);

	cin >> n >> m;
	if(n <= 500 && m <= 200) {
		solve1();
	} else {
		solve2();
	}
	
	return 0;
}