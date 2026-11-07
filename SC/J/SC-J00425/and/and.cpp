#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
const int maxn = 2e5 + 2, mod = 998244353;
const ll inf = 1e18;
ll n, m, a[maxn], mx, f[2010][2010], pw[35], ans, len;
string v[maxn];
string jz(ll x){
	string res = "";
	while (x){
//		cout << x << " " << x % 2 << " " << char('0' + x % 2) << " " << res << '\n';
		res += char('0' + x % 2);
		x >>= 1;
//		len ++;
	}
	string res2;
	if (res.empty()){
		len = 1;
		res = "0";
		res2 = "0";
	}else{
//		reverse(res.begin(), res.end());
		for (int i = 0; i < res.size(); i++) res2 += res[res.size() - 1 - i];
	}
//	mx = max(mx, len);
//	cout << len << '\n';
//	cout << "***" << res << '\n';
	return res2;
}  
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
//	cout << jz(200000) << " " << len << " " << mx << '\n';
	cin >> n >> m;
	pw[0] = 1;
	for (int i = 1; i <= 30; i++) pw[i] = pw[i - 1] * 2;
	for (int i = 1; i <= n; i++){//O(n) 
		cin >> a[i];
		v[i] = jz(a[i]);//O(log(a[i]))
		ll len = v[i].size();
//		cout << len << '\n';
		mx = max(mx, len);
//		cout << "///" << i << '\n';
	}
	for (int i = 1; i <= n; i++){
		if (v[i].size() < mx){
			while (v[i].size() < mx) v[i] = '0' + v[i];
		}
	}
//	for (int i = 1; i <= n; i++){
//		for (auto j : v[i]) cout << j << " ";
//		cout << '\n';
//	}
	vector<ll> p;
	ll r = mx - 1;
	for (int i = 1; i <= n; i++) p.push_back(i);
	for (int w = 0; w < mx; w++){
		vector<ll> tmp;
		for (auto i : p){
			if (v[i][w] == '1') tmp.push_back(i);
		}
		if (tmp.size() >= m){
			ans += pw[r];
			p = tmp;
		}
		r--;
	} 
	cout << ans;
	return 0;
}
/*
9:29 开T3 
9:30 没记错的话去年T3是xor吧，那明年T3会不会是or？ 
9:31 感觉不难？ 
9:32 emm好吧想错了，还是有点难的。。。直接暴搜有25pts 
9:43 n^2 dp有50pts 
9:54 哦不n^2 dp好像是错的！好像要n^3才行
9:57 有点像贪心？ 
10:03 贪心小样例过了，开始测大样例 
10:04 最后一个大样例死循环了？ 
10:16 这就是玄学吗？根本不可能死循环啊？为什么？？？ 
10:23 到底是为什么啊。。。 
10:36 我要疯了 
10:41 算了先看T4 
10:45 哦哦哦哦哦哦哦哦哦调出来了！数组开小了？？？？？？？我个唐人，成功浪费40min 
*/ 
/*
4 2
3 15 12 12


5 3
31 3 1 15 7
*/