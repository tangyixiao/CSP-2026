#include<bits/stdc++.h>
#define _for(i, a, b) for(int i = a; i <= b; ++i)
#define for_(i, a, b) for(int i = a; i >= b; --i)
using namespace std;
const int N = 5e5 + 5, M = 3e5 + 5;
int n, m, a[N], lt[N], ls[N], t, ans[N];
bool fl[N];
vector<int> v(N), x(N);
int main(){
	ios::sync_with_stdio(false), cin.tie(0);
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
//	_for(i, 1, n) cin >> a[i];
//	_for(i, 1, n){
//		int t = 0;
//		_for(j, 0, max(n, m)) v[j] = 0, x[j] = 0;
//		_for(j, i, n){
//			if(x[a[j]]) t = x[a[j]] - 1;
//			v[++t] = a[j];
//			x[a[j]] = t;
//		}
//		_for(j, 1, n){
//			if(!v[j]) break;
//			ans[v[j]]++;
//		}
//	}
	_for(i, 1, n){
		cin >> a[i];
		ls[a[i]] = lt[a[i]];
		lt[a[i]] = i;
	}
	for_(i, n, 1){
		ans[a[i]] += i - t;
		t = max(t, ls[a[i]]);
	}
//	t = 0;
//	_for(i, 1, n){
//		_for(j, i, n){
//			if(lt[a[i]] != i) break;
//			ans[a[i]]++;
//		}
//	}
	_for(i, 1, m) cout << ans[i] << ' ';
	return 0;
}
/*
4 3
1 2 1 3
10 3
3 1 2 1 3 2 3 1 2 1
*/