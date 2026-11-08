/* 考完仔细检查，不要在考场上睡觉。 */
#include<bits/stdc++.h>
using namespace std;
const int MAXN=5e5+5,MAXM=3e5+5;
int n,m,a[MAXN],cnt[MAXM],fa[MAXM],d[MAXM];
bool vis[MAXM];
queue<int> q;
int main(){
    #ifndef ONLINE_JUDGE
        freopen("card.in","r",stdin);
        freopen("card.out","w",stdout);
    #endif
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++) scanf("%d",&a[i]);
    for(int i=1;i<=n;i++) cnt[a[i]]++;
    vis[a[n]]=true;
    for(int i=n-1;i>=1;i--){
        if(vis[a[i]]) continue;
        vis[a[i]]=true;
        fa[a[i]]=a[i+1];
        d[a[i+1]]++;
    }
    for(int i=1;i<=m;i++)
        if(d[i]==0) q.push(i);
    while(!q.empty()){
        int u=q.front();
        q.pop();
        cnt[fa[u]]+=cnt[u];
        if(--d[fa[u]]==0) q.push(fa[u]);
    }
    for(int i=1;i<=m;i++) printf("%d ",cnt[i]);
    return 0;
}
/*
09:17 开 T4，还有 3h13min 供我挥霍。
希望不是人类智慧 DP。
记得好像做过类似的题，似乎是倍增？
这种东西肯定是从 i=n 算到 i=1
考虑多出第 i 张牌怎么办。
游戏开始时就直接拉到了最左边。
出现相同牌时就把它们全收走了。
记使用 i~n 的牌时剩的牌的集合为 S[i]，那么若 a[j]=a[i]，则 S[i]=S[j]。嗯对。
如果没有相同点数的牌就是 S[i+1] 并上 a[i]。
问题出在如何维护答案。
O(nm) 肯定不行。我靠不会在这里阴我一手吧。
没有数据结构可以这么玩吧。bitset 也没有二维的啊。
空间也是 O(m^2/w) 的，这……考完串什么。
看看有没有什么妙妙的 trick。
这特殊性质是滚木吗，完全看不出来有什么辅助做题的。
特殊性质 A 有了跟有了一样。
看来是睡不了觉了。
看来是得乘以一个 log 或根号。
线段树肯定不用想了，那么分块/莫队呢？
诶暴力是不是有 68pts？好像是的。但这么低的分数会被 P 话哥串死的。。。
想出了一个 O(m^2) 的算法。那就有 76pts 了。
哦我知道了，性质 A 的意思我明白了。但没用啊，就 80pts。
不是怎么还不让我上厕所啊 /fn
让我想↗一↘想↗
会做了，这不就拓扑排序嘛。
先吃药。10:10。
10:17 写完了。
不是这是啥阴：
PS D:\CODE> fc.exe card1.out card1.ans
正在比较文件 card1.out 和 CARD1.ANS
***** card1.out
3 1 4
***** CARD1.ANS
3 1 4
*****
哦原来是行末空格，CCF 这玩意不判错对吧。
那应该没问题了。
睡觉睡觉。不是为什么监考老师看着我的代码在笑。
*/