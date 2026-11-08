/*
题意：给n个段。每个段有一个个数(cnt)和字符(c)，代表cnt个c
求拼成回文串的最小操作次数
数据：1<=n<=2e5，1<=ai<=1e9
首先肯定要开long long
注意这个数据范围？二分？完蛋了
等等，可不可以双指针
双指针得出的答案会是最优解吗？
有可能改左边最优，有可能改右边最优
有可能有的时候改左边，有的时候改右边最优吗？
可能是个贪心
不对
改左边和改右边好像是一样的
确实
只需要判断总和是奇数还是偶数
实力，大样例过了
测测自己的hack 
可以可以，过了 
*/
#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn = 2e5 + 5;
struct d {
	int cnt;
	char c;
} a[maxn];
int n;
signed main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		cin >> a[i].cnt >> a[i].c;
		sum += a[i].cnt;
	}
	int l = 1, r = sum;
	int lid = 1, rid = n;
	int cnt = 0;
	while (lid < rid) {
		if (a[lid].c == a[rid].c) {
			if (a[lid].cnt > a[rid].cnt) {
				a[lid].cnt -= a[rid].cnt;
				a[rid].cnt = 0;
				rid--;
			} else if (a[lid].cnt < a[rid].cnt) {
				a[rid].cnt -= a[lid].cnt;
				a[lid].cnt = 0;
				lid++;
			} else {
				a[lid].cnt = 0;
				a[rid].cnt = 0;
				lid++;
				rid--;
			}
			continue;
		} else {
			if (a[lid].cnt > a[rid].cnt) {
				cnt += a[rid].cnt;
				a[lid].cnt -= a[rid].cnt;
				a[rid].cnt = 0;
				rid--;
			} else if (a[lid].cnt < a[rid].cnt) {
				cnt += a[lid].cnt;
				a[rid].cnt -= a[lid].cnt;
				a[lid].cnt = 0;
				lid++;
			} else {
				cnt += a[rid].cnt;
				a[lid].cnt = 0;
				a[rid].cnt = 0;
				lid++;
				rid--;
			}
			continue;
		}
	}
	cout << cnt;
	return 0;
}
/*
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
*/
