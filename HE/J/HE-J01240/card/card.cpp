#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=5e5+10;
int a[N],ans[N],n,m,cnt[N];
signed main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++)cin>>a[i],ans[a[i]]++,cnt[a[i]]++;
	for(int i=1;i<=n;i++)
	{
		cnt[a[i]]--;
		if(cnt[a[i]]==0)ans[a[i+1]]+=ans[a[i]];
	}
	for(int i=1;i<=m;i++)cout<<ans[i]<<' ';
}/*
1271324 TH_HaZel
8:30 开考了
trick or treat 何意味。
试图配 vscode。
试图失败。为啥编译不过去/fn
进行一个倒开的操作。

9:20 我靠怎么这么卡。
我靠这个 DDD 咋这么难用。
算了还是投奔 Dev 吧。

9:40 诶呀我靠 D 写了一个假做法。南泵。

10:05 秒完 ABC 了。我说这场C细节写错害我调了一会。

10:10 怎么你们名字带“游戏”的题都这么神秘。谁能教我擂台游戏。希望 S 别考擂台游戏。考员工招聘都好得多

10:18 这个 AB 性质是个啥。有一点用（启发性）吗。。

10:30 那是不是把这玩意哈希成一个数再 dp 判断。

10:36 显然时间是 nm 的。

10:39 不是，那是不是做一遍树上前缀和就做完了。（11:17 吐槽：甚至不用显式建树）

10:45 对了。。。

11:12 不是这个 window 和 linux 文本比较咋都这么难用啊！我只能写个程序比。好歹是对了。

11:16 睡觉了。感觉这场红橙黄黄
完全胜利（喜）*/
