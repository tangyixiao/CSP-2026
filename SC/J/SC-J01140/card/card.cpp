#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define rep(i, l, r) for(int i = l; i <= r; i++)
#define req(i, r, l) for(int i = r; i >= l; i--)
#define pb push_back
using namespace std;
int rd() {
	int res = 0, f = 1; char ch;
	while(!isdigit(ch)) { if(ch == '-') f = -1; ch = getchar(); }
	while(isdigit(ch)) { res = (res << 3) + (res << 1) + (ch ^ 48); ch = getchar(); }
	return res * f;
}
const int N = 5e5 + 8;
int n, m;
int a[N], ans[N];
bool qwq[N];
vector<int> vec[N];
int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	n = rd(), m = rd();
	rep(i, 1, n) a[i] = rd();
	req(s, n, 1) {
		rep(i, s, n) qwq[i] = 1;
		rep(j, 1, m) vec[j].clear();
		rep(i, s, n) {
			int lst = 0;
			while(!vec[a[i]].empty() && !qwq[vec[a[i]][vec[a[i]].size() - 1]]) vec[a[i]].pop_back();  
			if(!vec[a[i]].empty()) lst = vec[a[i]][vec[a[i]].size() - 1];
			if(lst) 
				rep(j, lst + 1, i - 1) qwq[j] = 0;
			vec[a[i]].pb(i);
		}
//		cout << s << "\n";
//		cout << "\n";
		rep(j, 1, m) ans[j] += (vec[j].size() > 0);
	}
	rep(j, 1, m) cout << ans[j] << (j < m? " ": "");
	return 0;
}
/*
密码：Trick||Treat!
9:10 100 + 100 + 100
9:41 100 + 100 + 100 + 36
10:24 100 + 100 + 100 + 52

我常常追忆过去。生命瞬间定格在脑海……

不要挂分 TwT
不要挂分 TwT
不要挂分 TwT
不要挂分 TwT
不要挂分 TwT
不要挂分 TwT

input
4 3
1 2 1 3
output
3 1 4

input
5 3
1 2 1 3 2
0 1 2 1 1
output
2 5 3

input
10 3
3 1 2 1 3 2 3 1 2 1
output
10 3 3

*/