#include <bits/stdc++.h>
using namespace std;
#define fir(i, l, r) for(int i = (l); i <= (int) r; i++) 
#define fpr(i, l, r) for(int i = (r); i >= (int) l; i--)
/*
// freopen(".in", "r", stdin);
// froepen(".out, "w", stdout);
bestart AK ioi
xie_yu_fei AK ioi
@Hamburger999 女装！！！！！！！！！！！

---------------------------------------------------------

don't use x1 y1 ....!!!

*/
const int maxn = 2e5 + 10;
#define int long long
int a[maxn], pre[maxn], l[maxn], r[maxn];
char c[maxn];
set <int> st;
struct segment{
	int l, r, co;
	friend bool operator < (segment x, segment y){
		return x.l < y.l;
	}
};
set <segment> sg;
signed main(){
	ios :: sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n, sum = 0;
	cin >> n;
	fir(i, 1, n){
		cin >> a[i] >> c[i];
//		cout << a[i] << ' ' << c[i] << endl;
		pre[i] = pre[i - 1] + a[i];//右端点
		st.insert(pre[i - 1] + 1);//插入左端点
		l[i] = pre[i - 1] + 1, r[i] = pre[i];
	}
	int L = 1, R = pre[n], bell = 1, belr = n;
	while(L <= R){
//		cout << L << ' ' << R << endl;
		int gl = r[bell], gr = l[belr];
		int lenl = gl - L + 1, lenr = R - gr + 1;
//		cout << "goto" << gl << ' ' << gr << endl;
		if(lenl == lenr){
			sg.insert({L, gl, c[bell]}); 
			sg.insert({gr, R, c[belr]});
			L = gl + 1, R = gr - 1;
			bell++, belr--;
		}
		else if(lenl < lenr){
//			cout << "Greater" << endl;
			sg.insert({L, gl, c[bell]}); 
			sg.insert({R - lenl + 1, R, c[belr]});
			L = gl + 1, R -= lenl;
			bell++;
		}
		else{
//			cout << "Less" << endl;
			sg.insert({L, L + lenr - 1, c[bell]});
			sg.insert({gr, R, c[belr]});
			L += lenr, R = gr - 1;
			belr--;
		}
	}
//	for(auto i : sg){
//		cout << i.l << ' ' << i.r << ' ' << (char) i.co << endl;
//	}
	vector <segment> vg;
	for(auto i : sg) vg.push_back(i);
	int ans = 0;
	for(int i = 0; i < vg.size() / 2; i++){
		int j = vg.size() - i - 1;
		if(i >= j) break ;
//		cout << vg[i]
		if(vg[i].co != vg[j].co) ans += vg[i].r - vg[i].l + 1;
	}
	cout << ans;
	return 0;
}
/*
2
2 a
3 a

3
2 a
2 b
1 c


6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b

0 2 a
3 5 a
6 12
7 5 a
9 7 a
*/