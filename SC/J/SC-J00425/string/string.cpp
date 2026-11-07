#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
const int maxn = 2e5 + 2, mod = 998244353;
const ll inf = 1e18;
ll n, a[maxn], len, ans;
char c[maxn];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
//	freopen("data.in", "r", stdin);
//	freopen("solve.out", "w", stdout);
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> a[i] >> c[i];
	ll l = 1, r = n;
	while (l < r){
//		cout << "///" << l << " " << r << " " << a[l] << " " << a[r] << '\n';
		if (c[l] == c[r]){
			if (a[l] == a[r]) l++, r--;
			else if (a[l] > a[r]) a[l] -= a[r], r--;
			else a[r] -= a[l], l++;
		}else{
			if (a[l] == a[r]){
				ans += a[l];
				l++;
				r--;
			}else if(a[l] > a[r]){
				ans += a[r];
				a[l] -= a[r];
				r--;
			}else{
				ans += a[l];
				a[r] -= a[l];
				l++;
			}
		}
//		cout << ans << '\n';
	}
	cout << ans;
	return 0;
}
/*
8:54 开T2 
8:56 简单 
9:03 这个鼠标我要破防了 
9:05 过小样例，开始测大样例 
9:06 错了？ 
9:09 还是错的？ 
9:11 算了对拍找一下hack吧，大样例太大了调不出来 
9:24 还没调出来？ 
9:26 哦又饭堂了QAQ 
9:28 大样例过了，提交 
*/
/*
3
2 a
2 b
1 c


2	
2 a
3 a


6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b
*/