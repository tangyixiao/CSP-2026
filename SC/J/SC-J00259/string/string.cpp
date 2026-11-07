#include<bits/stdc++.h>
#define int long long
using namespace std;

struct st {
	int x; //字母出现次数
	char y; //所对应字母 
};
st a[200005];
signed main(){
	
	freopen("string.in" , "r" , stdin);
	freopen("string.out" , "w" , stdout);
	
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int n;
	cin >> n;
	
	for (int i = 1 ; i <= n ; i ++) {
		cin >> a[i].x >> a[i].y;
	}
	
	int l = 1 , r = n;
	int cnt = 0;
	while (true) {
		if (l == r) break;
		
//		if (a[l].y != a[r].y) {
//			cnt ++;
//			cout << a[l].x << ' ' << a[r].x << '\n';
//			cout << a[l].y << ' ' << a[r].y << '\n';
//		}
//		a[l].x --;
//		a[r].x --;
//		
		if (a[l].x == 0) {
			l ++;
		}
		if (a[r].x == 0) {
			r --;
		}
		if (a[l].x >= a[r].x && a[l].y == a[r].y) {
			a[l].x -= a[r].x;
			r --;
		}
		if (a[r].x >= a[l].x && a[l].y == a[r].y) {
			a[r].x -= a[l].x;
			l ++;
		}
		if (a[l].x >= a[r].x && a[l].y != a[r].y) {
			cnt += min(a[l].x , a[r].x);
			a[l].x -= a[r].x;
			r --;
		}
		
		if (a[r].x >= a[l].x && a[l].y != a[r].y) {
			cnt += min(a[l].x , a[r].x);
			a[r].x -= a[l].x;
			l ++;
		}
	}
	
	cout << cnt << '\n';
	return 0;
} 