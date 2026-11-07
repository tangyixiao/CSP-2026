#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
const int maxn = 2e5 + 2, maxm = 3e5 + 5, mod = 998244353;
const ll inf = 1e18;
ll n, m, a[maxn], pos[maxm], ans[maxm], siz, p[maxn];
void solve_On3(){
	for (int i = 1; i <= n; i++){
		for (int j = 0; j <= m; j++) pos[j] = 0;
		for (int j = i; j <= n; j++){
			if (pos[a[j]] == 0){
				pos[a[j]] = ++siz;
				p[siz] = a[j];
			}else{
				for (int k = pos[a[j]] + 1; k <= siz; k++) pos[p[k]] = 0;
				siz = pos[a[j]];
			}
		}
		for (int j = 1; j <= m; j++)
			if (pos[j])
				ans[j]++;
	}
	for (int i = 1; i <= m; i++){
		cout << ans[i];
		if (i != m) cout << " ";
	}
}
void solve_On2(){
	for (int i = 1; i <= m; i++){
		cout << ans[i];
		if (i != m) cout << " ";
	}
}
int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++){
		cin >> a[i];
	}
//	solve_On2();
	solve_On3(); 
	return 0;
}
/*
8:20 鼠标好难用！滚轮是坏的！ 
8:30 Trick||Treat!
8:35 终于解压好了
8:42 哦我看错题面了。。。
8:46 写完T1，测大样例 
8:52 终于测完大样例（饭堂了），提交代码 
8:53 检查freopen 
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
9:29 开T3 
9:30 没记错的话去年T3是xor吧，那明年T3会不会是or？ 
9:31 感觉不难？ 
9:32 emm好吧想错了，还是有点难的。。。直接暴搜有25pts 
9:43 n^2 dp有50pts 
9:54 哦不n^2 dp好像是错的！好像要n^3才行
9:57 有点像贪心？ 
10:03 贪心小样例过了，开始测大样例 
10:04 最后一个大样例死循环了？ 
10:16 这就是玄学吗？根本不可能死循环啊？为什么？？？ 
10:23 到底是为什么啊。。。 
10:36 我要疯了 
10:41 算了先看T4 
10:43 开T4，T3最后一个大样例死循环的bug还没搞好。。。
10:45 哦哦哦哦哦哦哦哦哦T3调出来了！数组开小了？？？？？？？我个唐人，成功浪费40min 
10:50 上个厕所 
10:51 时间不多了先打个暴力吧 
10:57 n^3暴力小样例过了，24pts 
10:58 fc不会忽略行末空格有点恶心
11:02 电脑时间显示有问题，现在是2026/10/31 0:02？ 
11:04 应该可以优化成n^2的 
11:07 哦不对好像优化不了 
11:09 喵 
11:10 O(n^3)不会被卡常吧（惊恐 
11:11 先把游记都写到T4里面来吧 
11:13 希望能上迷惑行为大赏，洛谷zimozimo求壶关 
11:14 前三道大概难度在红橙黄吧 
11:16 有点没思路，先写对拍检查一下前面的题目吧
11:21 为什么T3跑的那么慢？ 
11:25 写T3对拍还是T4优化？ 
11:34 把T3对拍跑起来了，继续看T4 
11:37 T4绿or青？ 
11:40 真的没有思路，看一下Linux下的编译情况吧 
11:46 为什么freopen会报错吗？
11:48 应该没什么问题，玩一会surf吧~ 
11:49 算了还是先检查一遍每道题的代码吧
11:54 OK最后把这些都交了就可以玩surf了！
11:59 喵喵喵 
*/
/*
4 3
1 2 1 3

10 3
3 1 2 1 3 2 3 1 2 1
*/