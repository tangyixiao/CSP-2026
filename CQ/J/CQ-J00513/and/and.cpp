/*
10:44 大样例过啦啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊 

其实T3T4暴力一下有一等了
不行！雷神曾经说过：“敌难我难，敌易我易”
老老实实想正解
题意：
给你n个非负整数，让你在中选出m个数使按位与最大
首先，我们可以知道一个性质：按位与只会使一个数变得更小或不变
所以我们先选择相同的；
数据范围：1<=n<=2e5(危险的数据范围)
0<=ai<2^30
可不可以先选里2^i最近的
枚举i，从大到小
枚举n，从1到n
选k个
时间复杂度O(n logn)
有可能是正解 
事先进行排序
可以！ 
想到hack数据了
比如
4 2
16 15 8 7
我会输出0
正确答案是8(15 & 8) 
还是错的
3 2
16 8 7
OUT:0
ANS:0
是对的
4 2
16 6 8 7
OUT:0
ANS:6
*/ 
#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn = 2e5 + 5;
int n, m;
int a[maxn];
int lg[31];
bool cmp(int n1, int n2) {
	return n1 > n2;
}
signed main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	lg[0] = 1;
	for (int i = 1; i <= 32; i++) {
		lg[i] = lg[i - 1] * 2;
	}
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	vector<int>way;
	sort(a + 1, a + n + 1, cmp);
	int logg = log2(a[1]);
	int ans = lg[31] - 1;
	int cnt = 0;
	int j = 2;
	if (lg[logg] != a[1]) {
		way.push_back(a[1]);
		ans = a[1];
		cnt = 1;
	}
	for (int i = logg + 1; i >= 1; i--) {
		int mn = lg[i - 1];
		for (; j <= n; j++) {
			if(a[j] <= mn) break;
			if(cnt == m) break;
			if(cnt == 0) 
				if(a[j] == lg[i]) continue;
			way.push_back(a[j]);
			cnt++;
			ans = ans & a[j];
		}
	}
//	for (auto i:way) cout << i << ' ';
//	cout << '\n';
	cout << (cnt == m ? ans : 0);
	return 0;
}
/*
4 2
3 15 12 12

5 3
31 3 1 15 7
*/
