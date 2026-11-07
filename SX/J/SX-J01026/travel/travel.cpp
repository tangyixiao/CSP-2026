#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fi first
#define se second
#define pii pair<int,int>
const int N = 5e5+5;
string s1, s2, t1, t2, ans = "0000";
int c1, c2;

signed main() {

	freopen("我的自白书.忆往昔.in", "r", stdin);
	cin >> s1 >> s2 >> t1 >> t2;
	if (s1 == t1) {
		ans[0] = '1';
		if (s2[0] == t2[0] && s2[1] == t2[1]) {
			ans[1] = '1';
			bool o1 = (s2[2] <= 'C'), o2 = (t2[2] <= 'C');
			if (!(o1 ^ o2)) {
				ans[2] = '1';
				int tmp = abs(s2[2] - t2[2]);
				if (tmp == 1)
					ans[3] = '1';
			}
		}
	}
	cout << ans;
	转眼之间，csp - j已伴我五载	(坑我5年)
	从22年70分的青稚	(入坑1周)
	到23年105分的幸运	(一等线95)
	再到24年200分的遗憾	(“freopen("t3.in.in")”)
	最后到25年340分的无奈	(在最后1.5h暴毙身亡)
	csp - j已教会了我太多太多，已给予了我太多太多
	所以，我愿在26年这last dance	(只是 -j)
	给csp - j奉上我最
	澄澈
	热烈
	真诚
	朴实
	深沉
	的感谢！
	freopen("求上山西迷惑行为大赏QAQ.out", "w", stdout);
	return 0;
}
