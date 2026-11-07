#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
string a1,a2,b1,b2;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>a1>>a2>>b1>>b2;
	int car1=(a1[0]-'0')*10+(a1[1]-'0');
	int car2=(b1[0]-'0')*10+(b1[1]-'0');
	char l1=a2[2],l2=b2[2];
	int h1=(a2[0]-'0')*10+(a2[1]-'0');
	int h2=(b2[0]-'0')*10+(b2[1]-'0');
	int f1,f2;
	if(l1=='D' || l1=='F')f1=2;
	else f1=1;
	if(l2=='D' || l2=='F')f2=2;
	else f2=1;
	if(car1==car2)cout<<1;
	else cout<<0;
	if(car1==car2 && h1==h2)cout<<1;
	else cout<<0;
	if(car1==car2 && h1==h2 && f1==f2)cout<<1;
	else cout<<0;
	if(car1==car2 && h1==h2 && f1==f2 && 
		((f1==1 && llabs((int)(l1-l2))==1)
		 || (f1==2 && llabs((int)(l1-l2))==2))){
		cout<<1;
	}else{
		cout<<0<<endl;
	}
	return 0;
}
/*
8:31 解压，密码：Trick||Treat! ？
8:32 读 T1
8:33 红题！！！
8:42 秒杀！
8:42 读 T2
8:44 T2 黄？
8:49 测大样例......
8:51 大样例全过了？！
8:52 读 T3
8:54 坏了，T3 一眼没思路
8:56 有一点点思路，试试？说干就干！
9:01 测大样例
9:02 坏了，挂了，调代码......
9:03 饭堂了，0 写成 1 了
9:04 再测大样例，全对
9:05 读 T4
9:06 嗯...不会，想一想
9:08 盲猜留下来的数有一定性质
9:11 有点模糊的思路，模拟一下（终于用上草稿纸了）
9:15 思路假了
9:39 好像分析出思路了~~~
9:47 写完了，测大样例
9:50 大样例全过？我...AK了？
9:55 用虚拟机跑一下
9:57 ！不对，我怎么用size类型和long long比，强转！
9:58 编译通过
9:58 开始提交
9:58 交完了，开始对...不对，暴力好像不是很好写
9:59 算了，总结一手，反正也没事干。
10:00 总结

# 总结
今天是CSP考试，应该会挂分吧。。。但是又不想对拍。
今天上午的思维过程如上，下面应该还会写。
这个应该可以进人类迷惑行为大赏吧。
再看看题目：

T1 : 我的评价是上红下橙，算法：选择结构，大唐题，
只是细节有点多，成功成为四道题中最长最屎的代码，O(1)。
T2 : 黄题吧，定义两个指针从两边往中间扫就行了，
O(n)。
T3 : 黄 or 绿？反正感觉好像很水，
贪心考虑从大往小枚举每一位，
然后将那位是 1 的放进候选，其余不要。
分类讨论如果候选有 m 个答案的那一位就是 1，
反之为 0 。需要注意的是下一次选侯选应从
上一轮选出的里面选，复杂度 O(n log maxa)。
T4 : 绿 or 青？有点思维含量，但是通过手玩样例，
从而发现一些性质，即设一个数的贡献为一个状态，
即：从一个位置开始操作剩下的有哪些作为一个状态，
每次从后往前扫，若是第一次出现，就是在上一个状态
中加上它自己，反之就是上一个它自己的状态，
通过这些指针可以成功建出一颗树，同时保存每一个数
第一次出现的位置作为根，然后统计子树大小就行了，
复杂度 O(n+m)。

题目难度大概是红黄黄青吧，但是我感觉我赛事切青
不太可能，还是评绿吧，J 组也是越来越简单了。

10:17 写完总结
10:18 无聊
10:19 睡觉
10:47 椅子太高了，不舒服，睡不着
10:48 玩会虚拟机（这学校机房竟然没有蜘蛛纸牌，太恶心了）
11:04 不好玩，玩会...不知道玩啥了，睡觉

真心想进迷惑行为大赏，感谢作者。
qwqqwqqwqqwqqwqqwqqwqqwqqwqqwqqwqqwqqwqqwqqwqqwq
qwqqwqqwqqwqqwqqwqqwqqwqqwqqwqqwqqwqqwqqwqqwqqwq
qwqqwqqwqqwqqwqqwqqwqqwqqwqqwqqwqqwqqwqqwqqwqqwq
qwqqwqqwqqwqqwqqwqqwqqwqqwqqwqqwqqwqqwqqwqqwqqwq
*/