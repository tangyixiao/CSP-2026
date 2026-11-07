#include <bits/stdc++.h>
using namespace std;
#define fir(i, l, r) for(int i = (l); i <= (int) r; i++) 
#define fpr(i, r, l) for(int i = (r); i >= (int) l; i--)
/*
FAKE !!// freopen(".in", "r", stdin);
FAKE !!// froepen(".out, "w", stdout);
bestart AK ioi
xie_yu_fei AK ioi
@Hamburger999 女装！！！！！！！！！！！

can't you! can't you! love me 中？
---------------------------------------------------------
5 3
31 3 1 15 7

don't use x1 y1 ....!!!

*/
#define int long long
const int maxn = 2e5 + 10;
int a[maxn];
signed main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m;
	multiset <int> st;
	cin >> n >> m;
	fir(i, 1, n) cin >> a[i], st.insert(a[i]);
	int ans = 0;
	fpr(bit, 30, 0){
//		if(bit >= 4) continue ;
//		cout << "bit = " << bit << endl;
//		for(auto i : st) cout << i << ' ';
//		cout << endl;
		int cnt = 0;
		vector <int> er;
		for(auto i : st){
			if(i >> bit & 1) cnt++;
			else er.push_back(i);
			if(cnt == m) break ;
		}
//		cout << cnt << endl;
		if(cnt < m) continue ;
		for(auto i : er) st.erase(st.find(i));
//		cout << "result = 1";
		ans |= 1 << bit;
	}
	cout << ans << endl;
	return 0;
}