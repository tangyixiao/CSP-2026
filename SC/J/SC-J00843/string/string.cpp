#include <bits/stdc++.h>
using namespace std;
using ll = long long;
struct ord{
	ll l, r;
	char c;
	bool operator < (const ord& t) const { return l < t.l; }
};
ll n, ls;
vector<ord> t, v1, v2;
/*
t 原始数据
v1 右半部分
6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b

v2 左半部分 
*/
void oths(){
	vector<char> s(ls + 1);
	for (int i = 1;i <= n;i ++){
		for (int j = t[i].l;j <= t[i].r;j ++)s[j] = t[i].c;
	}
	ll ans = 0;
//	cout << "ls:" << ls << '\n';
	for (int i = 1;i <= ls / 2;i ++){
		if (s[i] != s[ls + 1 - i]) ans ++;
//		cout << s[i] << ' ' << s[ls + 1 - i] << '\n';
	}
	cout << ans;
	exit(0);
} 
int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);
	cin >> n;
	t.assign(n + 1, {0, 0, '\0'});
	for (ll i = 1;i <= n;i ++){
		ll a;
		char c;
		cin >> a >> c;
		t[i].l = ls + 1, t[i].r += ls + a, t[i].c = c;
		ls += a;
//		cout << t[i].l << ' ' << t[i].r << ' ' << t[i].c << '\n';
	}
	
	
	
	
	
	if (ls <= 1e6) oths();
//	oths();





//	cerr << ls << '\n';
	// 转化完成 1111111
	ll mid = (1 + ls) / 2; // 求中点 
	for (ll i = 1;i <= n;i ++) {
		ord tmp = t[i];
		ll l = tmp.l, r = tmp.r;
		char c = tmp.c;
		if (r < mid) v1.push_back({l, r, c}); // 右半部分 
		else if (l > mid) v2.push_back({l, r, c}); // 左半部分
		else{
			if (ls & 1) {
				if (l != mid) v1.push_back({l, mid - 1, c});
				if (r != mid) v2.push_back({mid + 1, r, c});
			}// n 为奇数时要将中点砍掉 
			else{
				v1.push_back({l, mid, c});
				if (r != mid)v2.push_back({mid + 1, r, c});
			}
		} // 与中点存在交集 
	}
	
//	cout << '\n';
//	for (auto x : v1) cout << x.l << ' ' << x.r << ' ' << x.c << '\n';
//	cout << '\n';
//	for (auto x : v2) cout << x.l << ' ' << x.r << ' ' << x.c << '\n';
	ll ans = 0;
	// 拆分完成
	for (auto x : v1){
		ll l = x.l, r = x.r, tl = ls + 1 - x.r, tr = ls + 1 - x.l;
		ord t = {tl, tr, x.c};
		char c = x.c;
		ll idx = ll(upper_bound(begin(v2), end(v2), t) - begin(v2)) - 1;
		 
//		cout << "idx:" << idx << '\n';
		
		for (ll j = v2.size() - 1;j > idx;j --){
			if (v2[j].c != c) ans += v2[j].r - v2[j].l + 1; 
			v2.pop_back();
		}
		if (v2[idx].c != c) ans += v2[idx].r - tl + 1;
		ll el = v2[idx].l;
		char ec = v2[idx].c;
		v2.pop_back();
		if (el != tl){
			v2.push_back({el, tl - 1, ec});
		}
//		cout << "ans:" << ans << '\n';
	}
	cout << ans;
	return 0;
} 
/*
4
1 a
1 a
1 b
1 b

abcdef

aabcc 

aabbc
*/


/*
对于单组不等字符，修改的代价恒为 1.
加之对应关系不变，考虑将字符串砍半进行处理。

考虑左侧某区间-在右侧的对应区间为(L, R) 
其对应右侧一个(多个区间)

步骤：
1.读入
2.将区间转化为形如 (L,R,C) 的形式。
3.以中点为界(如果 n 为奇数则不考虑中点)划分区间，如有过中点的区间则将其分开。
4.便利左侧区间，求它对应的右侧区间 (L',R',C) 在左侧区间进行对应。 
*/