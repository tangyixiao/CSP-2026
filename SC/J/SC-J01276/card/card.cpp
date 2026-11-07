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

don't use x1 y1 ....!!!

---------------------------------------------------------
不是，你们这个 CCE 大洋里太水了，吧！
我还得打对拍十八。
*/
const int maxn = 5e5 + 10;
int n, m, a[maxn], mi[maxn], ma[maxn], t[maxn], ans[maxn], mao[2][maxn];
namespace easy{
	int pos[maxn], tt[maxn];
	bitset <maxn> exist;
	void main(){
		fir(i, 1, n){
			stack <int> q;
			fir(i, 1, m) tt[i] = 0;
			fir(j, i, n){
				if(! tt[a[j]]) tt[a[j]]++, q.push(a[j]);
				else{
					while(q.size()){
						int x = q.top();
						if(x == a[j]) break ;
						q.pop();
						tt[x]--;
					}
				}
			}
			while(q.size()) ans[q.top()] ++, q.pop();
//			cout << endl;
		}
		fir(i, 1, m) cout << ans[i] << ' ';
	}
}
signed main(){
	ios :: sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	fir(i, 1, n) cin >> a[i];
	easy :: main();
//	fir(i, )
	return 0;
}