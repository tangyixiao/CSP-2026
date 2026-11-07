#include<iostream>
#include<algorithm>
#include<deque>
#include<stack>
#include<vector>
#include<cmath>
#include<cstring>
#define IOS ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
using namespace std;
const int N=5e5+5;
const int M=3e5+5;
int n,m,a[N],Card[N],cnt,num[M];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	IOS;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int Times=1;Times<=n;Times++)
	{
		cnt=0;
		for(int i=Times;i<=n;i++)
		{
			if(!cnt)
			{
				Card[++cnt]=a[i];
				continue;
			}
			int pos=0;
			for(int r=1;r<=cnt;r++)
				if(Card[r]==a[i]) pos=r;
			if(!pos)
			{
				Card[++cnt]=a[i];
				continue;
			}
			cnt=pos;
		}
		for(int i=1;i<=cnt;i++)
			num[Card[i]]++;
	}
	for(int i=1;i<=m;i++)
		cout<<num[i]<<' ';
	cout<<'\n';
	return 0;
}
/*
2026.10.31  10:11	七高考场

不确定下午 S 组有没有时间写游记，既然题写完了就上午写吧。

这可能是我最后一次打比赛了，高三不知道还有没有心情来一趟。

我是从六年级开始接触的 OI......（省略10000字，退役祭里面好像写过了），高二了，我已经一年没写过代码，今年来考场打打牌就过去了 O(∩_∩)O 。不禁想起去年 NOIP 坐我旁边那位（来的时候看到在打蜘蛛纸牌，走的时候在打俄罗斯方块），她当时心态不会和现在的我一样吧。
同届的几个哥们也退得差不多了，十一月份的 NOIP 集训据说都不会有多少高二的学生，唯一一个这学期开学还在停课的同志，也因为在模拟赛里被初三+高一的同学薄纱放弃了，令人唏嘘 /(ㄒoㄒ)/~~

每年考完之后都有一个看别人代码里游记的保留节目，但是到自己写的时候就写不出来了 o_o ....

早上忘记买吃的带来了，好饿啊 (╯▔皿▔)╯
很有意思的是，我还没进考场就发现监考老师之一恰好就是去年监考我 J 组的老师，尽管和去年好像不是同一个机房（根据我去厕所的移动用时粗略估计），记得他当时还说准考证上的人不像我 (*^_^*)（不过也确实不大像就是了）。
今年的 pdf 怎么还是叫 day1 啊，去年的 NOI plus 我记得也叫这个，有点ptsd。
忘了怎么在 Linux 下编译了，那算了吧。call back 一下，想起来第一次打 CSP 的时候，T1是叫吃苹果来着？当时定义了一个变量叫 index，由于当时还不会在 Linux 下编译且 Dev-C++ 没有警告喜提 CE ┗|｀O′|┛

待到缘分耗尽，关系断裂，我们还会在一起吗？
*/