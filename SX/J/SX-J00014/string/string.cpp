#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define il inline
using namespace std;

const ll N = 2e5+5, M = 2e5+5;

ll n, L, x, zl, yl;
char ch;

struct Subs{
	ll ed, lth, color;
};
Subs myleft[N], myright[N], tot[N];

bool cmp(Subs x, Subs y) {
	return x.ed < y.ed;
}

ll erfen(ll op, ll st, ll nd, ll fd) {
//	cout << op << ' ' << st << ' ' <<nd << ' ' <<fd << '\n';
	if (op == 1) {
		ll l = st, r = nd, mid = 0;
		while (l < r) {
			mid = (l+r)/2;
//			cout << l << r << mid << '\n';
			if (tot[mid].ed < fd) l = mid + 1;
			else if (tot[mid].ed > fd) r = mid;
			else break;
		}
			mid = (l+r)/2;
		return mid;
	}
	if (op == 2) {
		ll l = st, r = nd, mid = 0;
		while (l <= r) {
//			cout << l << r << mid << '\n';
			mid = (l+r)/2;
			if (myleft[mid].ed < fd) l = mid + 1;
			else if (myleft[mid].ed > fd) r = mid;
			else break;
		}
		return mid;
	}
	if (op == 3) {
		ll l = st, r = nd, mid = 0;
		while (l <= r) {
			mid = (l+r)/2;
			if (myright[mid].ed < fd) l = mid + 1;
			else if (myright[mid].ed > fd) r = mid;
			else break;
		}
		return mid;
	}
	return 0;
}

void print() {
	cout << "myleft:\n";
	for (int i = 1; i <= zl; i++) {
		cout << myleft[i].ed << '&' <<myleft[i].lth << '&' <<myleft[i].color<<'\n';
	}
	cout << '\n';
	cout << "myright:\n";
	for (int i = 1; i <= yl; i++) {
		cout << myright[i].ed << '&' <<myright[i].lth << '&' <<myright[i].color<<'\n';
	}
	cout << '\n';
	cout << "tot:\n";
	for (int i = 1; i <= n; i++) {
		cout << tot[i].ed << '&' <<tot[i].lth << '&' <<tot[i].color<<'\n';
	}
	cout << '\n';
	cout << "=========================\n";
}

int main() {


	ios::sync_with_stdio(0);
	cin.tie(0);
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	string ss = "";
	for (int i = 1; i <= n; i++) {
		ll xx;
		char cc;
		cin >> xx >> cc;
		for (int i = 1; i <= xx; i++) ss += cc;
		L+=xx;
	}
	ll ans = 0;
	for (int i = 0; i < L/2; i++) {
		if (ss[i] != ss[L-i-1]) ans++;
	}
	cout << ans;


















//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	freopen("string.in", "r", stdin);
//	freopen("string.out", "w", stdout);
//	cin >> n;
//	for (int i = 1; i <= n; i++) {
//		cin >> x >> ch;
//		L += x;
//		tot[i] = {L, x, (ch - 'a' + 1)};
//	}
////	print();
//	ll mi = erfen(1, 1, n, L/2+1);
////	cout << "mi:" << mi << '\n';
//	tot[mi].lth = tot[mi].ed - (L - tot[mi-1].ed);
//
//	zl = mi - 1, yl = 0;
//	for (int i = 1; i <= zl; i++) {
//		myleft[i] = tot[i];
//	}
//	for (int i = n; i >= mi; i--) {
//		myright[++yl] = tot[i];
//		myright[yl].ed = L - myright[yl].ed + myright[yl].lth;
//	}
//
////	print();
//	ll newzl = zl, newyl = yl;
//	for (int i = 1; i <= zl; i++) {
//		ll cut = myleft[i].ed;
//		ll cutedid = erfen(2, 1, yl, cut);
////		cout << cut << ' ' <<cutedid << '\n';
//		if (cut != myright[cutedid].ed) {
//			myright[++newyl] = {cut, cut-myright[cutedid-1].ed, myright[cutedid].color};
//			myright[cutedid].lth = myright[cutedid].ed - cut;
//		}
//	}
//	for (int i = 1; i <= yl; i++) {
//		ll cut = myright[i].ed;
//		ll cutedid = erfen(3, 1, zl, cut);
////		cout << cut << ' ' <<cutedid << '\n';
//		if (cut != myleft[cutedid].ed) {
//			myleft[++newyl] = {cut, cut-myleft[cutedid-1].ed, myleft[cutedid].color};
//			myleft[cutedid].lth = myleft[cutedid].ed - cut;
//		}
//	}
//	zl = newzl, yl = newyl;
////	sort(myleft+1, myleft+zl+1, cmp);
////	sort(myright+1, myright+yl+1, cmp);
////	print();

    return 0;
}

/*
4
2 a
2 b
3 c
2 d

3
2 a
2 b
1 c



*/