/*
期望得分（11:43） 348/400
还是那句话：“敌难我难，敌易我易”
戒骄戒躁
概括题意：
一共有n张牌，数字为1~m，进行n局游戏
每一局中：从i~n打出n-i+1张牌
如果没有数字k的牌，放在最右边；
否则吃掉所有牌（不是我去吃），把这张牌放上去
求所有牌有多少局出现了它
2<=n<=5e5,1<=m<=3e5 
性质A，a1<=a2<=...<=an 16分
性质B，不想看
12分：n<=5,m<=2
24分：n<=500,m<=200
48分：n<=5000,m<=5000 

好像有点思路了
每个数保留最后一次出现的下标 
好吧，实际上是个优化了一点的暴力 
优化了过后的暴力打完
我怀疑是我题目读错了 
哦

一共有n张牌，数字为1~m，进行n局游戏
每一局中：从i~n打出n-i+1张牌
如果没有数字k的牌，放在最右边；
否则吃掉那张牌右边的所有牌（不是我去吃），把这张牌放上去
求所有牌有多少局出现了它

本质就是找到左边界最靠前且互不重合的区间，区间外面的就是答案 
还有20分钟，写不完了啊
差分
但是这样是 优化了两点的暴力
时间复杂度本质上还是O(n^2) 
除非特殊数据能过，这玩意和暴力没有什么区别
但是找区间这件事能不能预处理 
但是这样预处理也是O(n^2)
换一种预处理方法
先O(n)显出所有区间
不行啊，还是O(n^2)
再想想 
11:53 开始检查代码格式，不准备思考任何题和代码 
*/
#include<bits/stdc++.h>
//#define int long long
using namespace std;
const int maxn = 5e5 + 5;
int a[maxn];
int n, m;
int cnt[maxn];
int la[maxn];
map<int, int>last;
int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		last[a[i]] = i;
	}
	for (int i = 1; i <= n; i++) {
		if (last.count(a[i]) == 1) {
			if (i == last[a[i]]) {
				la[i] = 0;
			} else {
				la[i] = last[a[i]];
			}
		} else {
			la[i] = 0;
		}
	}
//	for (int i = 1; i <= n; i++) {
//		cout << la[i] << " ";
//	}
//	cout << '\n';
	vector<int>now;
	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= n; j++) {
			if (la[j] != 0) {
				j = la[j];
//			cout << j << ' ';
			}
			now.push_back(a[j]);
		}
		for (auto j : now) {
//			cout << j << ' '; 
			cnt[j]++;
		}
		now.clear();
//		cout << endl;
	}
	for (int i = 1; i <= m; i++) {
		cout << cnt[i] << (i != m ? ' ' : '');
	}
	return 0;
}
/*
4 3
1 2 1 3

10 3
3 1 2 1 3 2 3 1 2 1
*/
