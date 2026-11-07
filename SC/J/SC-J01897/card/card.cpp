#include<bits/stdc++.h>
//#define int long long 
#define endl '\n'
#define YUANSHEN ios_base::sync_with_stdio(0);
#define QIDONG cin.tie(0);
#define inf 1e14
#define mod 998244353
#define frein freopen("card.in","r",stdin);
#define freout freopen("card.out","w",stdout);
#define pii pair<int,int>
using namespace std;
const int maxn=1e6+10;

/*
难点在于考察 i 存在的充要条件
考虑递推
从后往前做
f_i 表示以 i 为起点的出现数的桶数组
l_i 表示最小的 j>i 满足 a_i=a_j
那么有转移：
f_i=f_{l_i}|=a_i
直接主席树！！！！！！！！！！！！
统计答案的话，对于每个根打标记，然后下传计算一下贡献即可
*/

int ans[maxn],a[maxn],n,m,lst[maxn],root[maxn];

struct HJTtree{
	int idx=0;
	struct Node{int sum,lc,rc,tag; bool vised;}tr[maxn*20];
	void pushup(int u){tr[u].sum=tr[tr[u].lc].sum+tr[tr[u].rc].sum;}
	int build(int l,int r){
		int u=++idx,mid=(l+r)>>1;
		if(l!=r)tr[u].lc=build(l,mid),tr[u].rc=build(mid+1,r);
		return u;
	}
	int update(int pos,int l,int r,int x){
		int u=++idx,mid=(l+r)>>1; tr[u]=tr[pos];
		if(l==r){tr[u].sum=1; return u;}
		else if(mid>=x)tr[u].lc=update(tr[pos].lc,l,mid,x);
		else tr[u].rc=update(tr[pos].rc,mid+1,r,x);
		pushup(u); return u;
	}
	void Query(int u,int l,int r){
		if(tr[u].vised)return;
		tr[u].vised=true;
		if(l==r){ans[l]+=tr[u].tag*tr[u].sum; return;}
		int mid=(l+r)>>1;
		Query(tr[u].lc,l,mid),Query(tr[u].rc,mid+1,r);
	}
	void puttag(int u){tr[tr[u].lc].tag+=tr[u].tag,tr[tr[u].rc].tag+=tr[u].tag,tr[u].tag=0;}
	void Add(int u){tr[u].tag++;}
	void Output(int u,int l,int r){
		int mid=(l+r)>>1;
		if(l==r)cout<<tr[u].sum<<" ";
		else Output(tr[u].lc,l,mid),Output(tr[u].rc,mid+1,r);
	}
}T;

bitset<maxn*20> vis;

void Put(){
	queue<int> q;
	for(int i=1;i<=n;i++)
		q.push(root[i]),T.Add(root[i]),vis[root[i]]=true;
	while(q.size()){
		int u=q.front(); q.pop();
		if(!T.tr[u].lc)continue;
		T.puttag(u);
		if(!vis[T.tr[u].lc])vis[T.tr[u].lc]=1,q.push(T.tr[u].lc);
		if(!vis[T.tr[u].rc])vis[T.tr[u].rc]=1,q.push(T.tr[u].rc);
	}
}

void GetAns(){
	for(int i=1;i<=n;i++)
		T.Query(root[i],1,m);
	for(int i=1;i<=m;i++)
		cout<<ans[i]<<((i!=m)?(" "):(""));
}

signed main(){
	YUANSHEN QIDONG
	frein freout
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	root[n+1]=T.build(1,m);
	for(int i=n;i;i--){
		if(!lst[a[i]])root[i]=T.update(root[i+1],1,m,a[i]);
		else root[i]=T.update(root[lst[a[i]]],1,m,a[i]);
		lst[a[i]]=i;
	}
	Put(),GetAns();
	return 0;
}

/*
CSP2026 邮寄

教练让我们打 J。

# 上午

在大巴上随机进行了一些膜拜，前往考场

到了考场楼下，发现了门口的**保安**，一群人开始哄笑

更牛的是发现考场居然有 6 层楼，而且门口有一个 C 区，并且 C 前面有一个 C 的印子

所以说今天真的是潜入 CCE

然后进入考场，发现每个人都带了 inf 件食物

开题，喵了一眼四个题，直接会了 3 个

开写，不知道为啥 T2 写得非常狗屎，写了特别久，10:00 才调过

T3 2min 就过了

开 T4，发现直接倒着做套个主席树就做完了，然后发现并不会噗叽组做法，于是开写，大概 10:40 就过了（直到我现在在写游记的 11:47 才发现是个树的形态，很容易拆贡献。。。应该不会被卡常吧。。。）

写了后面 3 个题的对拍，然后就没事干了，上了 3 次厕所，炫完了一袋甘蔗，出考场已经饱了
*/