/*
考虑每次往后跳。

对于开头元素，先直接跳到其最后一次出现位置，然后不管；然后再看下一个，以此类推。

最后保留的就是所有遇到的（没被飞越的）。

反过来统计？

对于每个位置，考虑有多少个起点在中途会经过它。

首先是起点就在这；然后是……嗯……

对，你考虑 dp，做完了。
*/
#include <cstdio>
#include <vector>

using namespace std;

int fst[500005], lst[500005];
int a[500005];
int dp[500005];
int ans[500005];
vector<int> occ[500005];

int main()
{
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	scanf("%d%d", &n, &m);
	for(int i=1;i<=n;i++)
	{
		scanf("%d", a + i);
		if(!fst[a[i]]) fst[a[i]] = i;
		lst[a[i]] = i;
		occ[a[i]].push_back(i);
	}
	dp[1] = 1;
	ans[a[1]] = 1;
	for(int i=2;i<=n;i++)
	{
		dp[i] = 1;
		if(i-1 == lst[a[i-1]])
		{
			for(int x : occ[a[i-1]])
			{
				dp[i] += dp[x];
			}
		}
		ans[a[i]] += dp[i];
	}
	for(int i=1;i<=m;i++)
	{
		printf("%d ", ans[i]);
	}
	return 0;
}
/*
……现在是 09:49，T1 的静态查错和 T2,T3,T4 的对拍都做完了（拍子还在跑着）。

剩下 130min 我都要用来整活吗。

//freopen
// freopen
feropen
// freeopen
// fopen
// bits\stdc++.h
luogu kkksc03 chen_zhe wusixuan lihaochen123 Hard_Version small_lemon_qwq ...

哦对，我是 lihaochen123，~~Join our RV Club~~ 关注洛谷 lihaochen123 (1030243) 喵！

(Meow!)

My hexo blog: cloudspots.github.io/hexo (repo: github.com/Cloudspots/hexo)

我在大量 $RANDOM 中找到了 1！！
*/
/*
btw, 我们在 travel.cpp 中准备了一份 Linux 下的小游戏。

考场上耗时 ~1h 写的。

如果你的控制台行列数不同可以自己改一下。

这无疑是十分有趣的。 / This ought be fun!
*/