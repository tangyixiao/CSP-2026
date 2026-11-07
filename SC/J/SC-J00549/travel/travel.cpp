#include<bits/stdc++.h>
#define int long long
using namespace std;
#define N 200005
string s1, s2, s3, s4;
int n, m, ans, jl1[N], jl2[N];
signed main() {
	freopen ("travel.in", "r", stdin);
	freopen ("travel.out", "w", stdout);
	ios::sync_with_stdio (0);
	cin.tie (0), cout.tie (0);
	cin >> s1 >> s2 >> s3 >> s4;
	if (s1 == s3) ans = true;
	cout << ans;
	if (s2[0] != s4[0] || s2[1] != s4[1]) ans = false;
	cout << ans;
	char a = s2[2], b = s4[2];
	jl1['A'] = jl1['B'] = jl1['C'] = true, jl2['D'] = jl2['E'] = true;
	if ( (jl1[a] && jl2[b]) || (jl1[b] && jl2[a]) ) ans = false;
	cout << ans;
	if (ans && ( (a == 'A' && b == 'C') || (b == 'A' && a == 'C') ) ) ans = false;
	cout << ans << '\n';
	return 0;
}
/*
离退役不远了，写点东西吧
正在跑t2对拍，我说这次t4>t2>t3>t1
窝要诈骗：
//freopen ("travel.in", "r", stdin);
//freopen ("travel.out", "w", stdout);
//freopen ("card.in", "r", stdin);
//freopen ("card.out", "w", stdout);
//freopen ("card.in", "r", stdin);
//freopen ("card.out", "w", stdout);
//freopen ("and.in", "r", stdin);
//freopen ("and.out", "w", stdout);
//freopen ("and.in", "r", stdin);
//freopen ("and.out", "w", stdout);
其实也是在致敬某退役同学，有人猜到他发生了什么吗
猜对没奖
话说今天感觉比去年简单啊，红橙橙黄吧（t4树上差分甚至不需要lca）
去年Jt2因为没写对拍挂成45，痛失一等奖导致今年还在打
座位号001祭 2hAKJ组祭
想到下午的S亚历山大啊
while (true) CSP-S2026 rp++;
周围怎么这么安静，我该如何使用f(f(f(f(x))))系列trick啊
不过cw电脑有点强力了，一闪一闪亮晶晶，我甚至没开虚拟机
键盘也是坏的，空格键敲起来声音贼响，对不起啊周围同学
士力架好吃，嚼嚼嚼
这个样例.ans怎么不太对劲，是换行符的问题吧
删掉就正常了
user name : kds_8
for(int i=2,j=0;i<=n;i++){
	while(j&&s[j+1]!=s[i])j=nxt[j];
	if(s[j+1]==s[i])j++;
	nxt[i]=j;
}
for(int i=1,l=1,r=1,j=1;i<=n;i++){
	if(i<=r)j=min(r-i+1,d[l+r-i]);
	while(s[i-j]==s[i+j])j++;
	d[i]=j;
	if(j+i-1>r)l=i-d[i]+1,r=i+d[i]-1;
}
z函数板子记不到了，躺
void update (int u, int l, int r, int L, int R, int p) {
if (L <= l && r <= R) {
if (getmin (p, w[u], mid) == p) swap (w[u], p);
if (getmin (p, w[u << 1], l) == p) update (u << 1, l, mid, L, R, p);
else if (getmin (p, w[u << 1 | 1], r) == p) update (u << 1 | 1, mid + 1, r, L, R, p);
return pushup (u);
}
if (L <= mid);
if (R > mid);
return pushup (u);
}
int query(int u,int l,int r,int p){
if(l==r)return w[u];
return getmin(p<=mid?query(ls,p,x):query(rs,p,x),w[u],p);
}
讨厌斜率优化dp，真遇到了就拿李超树创过去
tarjan求点双应该不会考吧，感觉忘了
还剩半个小时没拍出来，应该没挂
现在屏幕好像好点了，起码我写板子的时候没有乱闪
bool cmp(const node a){
return bl[l]==bl[a.l]?r<a.r:l<a.l;
}
依旧莫队永远的神
int merge (int x, int y) {
if (!x || !y) return x + y;
if (rd[x] < rd[y]) rs[x] = merge (rs[x], y), pushup (y);
else ls[y] = merge (x, ls[y]), pushup (y);
return rd[x] < rd[y] ? x : y;
}
void flip(int u,int &x,int &y,int k){
if(!u)return x=y=0,void();
if(lz[u)pushdown(u);
if(a[u]<k)x=u,filp(rs[u],rs[x],y,k);
else y=u,flip(ls[u],x,ls[y],k);
}
int fd (int u, int k) {
if (a[u] == k) return u;
if(lz[u)pushdown(u);
return a[u] < k ? fd (rs[u], k) : fd (ls[u], k);
}
void update(int x,int k){
a[u]+=k,lz[u]+=k;
}
void pushdown(int u){
if(ls[u])js(ls[u]);
if(rs[u])js(rs[u]);
}
这FHQ treap看起来好别扭，可能是忘浇水枯死了吧，回去复习一下
*/