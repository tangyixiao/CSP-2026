#include<bits/stdc++.h>
#define int long long
using namespace std;

// 考虑到这题 m 这题这么小肯定有古怪
// 那么 m 肯定就是我们的切入点
// 又注意到每 m 个字符就必定会跳跃指针
// 我们记忆化的最坏情况是 (n*n/m) 的不会超时 
// 在考虑我的指针都确定了所以把所有指针的位置标记
// O(n) 统计答案，这题就做完了
// 今年 CSP-J 连 DP 都不考吗 /yiw 

// luogu 1317007 记忆化写不完了，卡我也只能受着了  - 10.58
// 刚才又去思考了一下，好像就是卡不掉的我们证明一下
/*

刚才那个是因为我以为 11.00 结束所以猪了 
但是思考了一下，发现我不会写这题的记忆化可惜了

> 只剩下麻木的我没有了当年的热血 

首先 CCF 想要卡我必须让我多次访问我访问过的节点
他该如何去做呢举个栗子 m=5 时
1 2 3 4 5 1 2 3 4 5 
n=10 的时候我访问了 5+4+3+2+1 = 15 
所以有 k = m,访问次数 t = m*(m+1)/2

但是注意到一点最终数据 m < n/2 的！

那他只能构造 ceil(n/m) 个 1-m 的循环节
因为无论如何最坏情况我的时间复杂度都是 O(ceil(n/w) * n) 的
而且这个情况似乎是构造不出来把时间复杂度干到 O(ceil(n/w) * n) 的序列
所以我的时间复杂度因该是严格小于 O(ceil(n/w) * n) 的
我才就算有 CCF 也造不出来，可能全知全能的谷友可能造出来 hack

今年 J 没考 DP，S 不会有三道 DP 在等着我吧
如果这是真的话，不要考轮廓线我什么都会做的 /ll 
我求你了，S 的脑电波题让我撞上行吗
真的很想上厕所，我什么都会做的 

T1 : 是个小模拟，就是这个题面我越读太菜了有点看不懂
靠着小样例才明白他在干什么。

T2 : 双指针模板题 + 原题，这出的是个olo啊

T3 : 按位贪心，好像很典，我才有人会把这题当 DP 做 /xx

T4 : 不带大脑，不证明的，考场做法的话估计很简单，
但是认为会被卡的可就惨了 /kel 

有点困了，旁边的校友爆切四道题已经开始玩小恐龙了
我先眯一会 希望这个监考不要把我叫醒 -11.18 

*/ 

const int N=5e5+100,M=3e5+100;

int n,m,nxt[N],pre[N],a[N],ans[M],suf[M],flag[N],tot[N];

inline void dfs(int i,int cnt){
	flag[i]=true;
	
	if(!(tot[i])){
		pre[i]+=cnt;
		return;
	} 
	
	if(nxt[i])dfs(nxt[i],cnt+!flag[nxt[i]]);
	else ans[a[i]]+=cnt,dfs(i+1,cnt+!flag[i+1]);
}

signed main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	
	for(int i=n;i>=1;i--){
		tot[i]=tot[i+1];
		nxt[i]=suf[a[i]];
		if(nxt[i])tot[i]++;
		suf[a[i]]=i;
	}
	
//	for(int i=1;i<=n;i++){
//		cerr<<nxt[i]<<' ';
//	}
	
	for(int i=1;i<=n;i++){
		if(!flag[i]){
			dfs(i,1);
//			cout<<'\n';
		}
	}
	
	for(int i=1;i<=n;i++){
//		cout<<pre[i]<<' ';
		pre[i]=pre[i-1]+pre[i];
		ans[a[i]]+=pre[i];
	}
	
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<' ';
	}
	
	return 0;
}
