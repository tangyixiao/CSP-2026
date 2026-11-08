#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 2e5 + 5;
struct node {
	ll l, r;
	char ch;
};
ll half = 0;
deque <node> qL;
deque <node> qR;
vector <node> vec;
ll n, sum, tot;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	ll last = 0;
	for (ll i = 1; i <= n; i ++) {
		ll cnt;
		char ch;
		cin >> cnt >> ch;
		sum += cnt;
		ll l = last + 1;
		ll r = last + cnt;
		vec.push_back({l, r, ch});
		last = r;
	}
	if (sum & 1) {//ÆæÊý
		half = sum / 2 + 1;
		for (auto k : vec) {
//			cout << k.l << " " << k.r << " " << k.ch << endl; 
			if (k.r < half) {
				qL.push_back(k);
			} else if (k.l > half) {
				qR.push_front(k);
			} else if (k.l <= half && k.r >= half) {
				ll l = k.l;
				ll r = half - 1;
//				cout << l << " " << r << endl; 
				if (l <= r) qL.push_back({l, r, k.ch});
				l = half + 1;
				r = k.r;
//				cout << l << " " << r << endl;
				if (l <= r) qR.push_front({l, r, k.ch});
			}
		}
	} else {//Å¼Êý 
		half = sum / 2;
		for (auto k : vec) {
			if (k.r <= half) {
				qL.push_back(k);
			} else if (k.l >= half + 1) {
				qR.push_front(k);
			} else if (k.l <= half && k.r >= half + 1) {
				ll l = k.l;
				ll r = half;
				if (l <= r) qL.push_back({l, r, k.ch});
				l = half + 1;
				r = k.r;
				if (l <= r) qR.push_front({l, r, k.ch});
			}
		}
	}
	while ((! qL.empty()) && (! qR.empty())) {
		auto nowL = qL.front(), nowR = qR.front();
		qL.pop_front();
		qR.pop_front();
		ll lenL = nowL.r - nowL.l + 1;
		ll lenR = nowR.r - nowR.l + 1;
//		cout << lenL << " " << lenR << " " << nowL.l << " " << nowL.r << " " << nowR.l << " " << nowR.r << endl;
		if (lenL < lenR) {
			nowR.r -= lenL;
			qR.push_front(nowR);
			if (nowL.ch != nowR.ch) {
				tot += lenL;
			}
		} else if (lenL > lenR) {
			nowL.l += lenR;
			qL.push_front(nowL);
			if (nowL.ch != nowR.ch) {
				tot += lenR;
			}
		} else {
			if (nowL.ch != nowR.ch) {
				tot += lenR;
			}				
		}
	} 
	cout << tot;
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

3
2 a
2 b
1 c
*/
