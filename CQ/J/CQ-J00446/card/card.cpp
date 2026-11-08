#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],nex[500005];
int bj[500005];
int ans[500005];
vector<int>g[500005];
int prt[500005];
int rd[500005],cnt,id[500005];
void dfs(int u){
	for(auto it:g[u]){
		dfs(it);
		ans[u]+=ans[it];
	}
}
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i=-~i)cin>>a[i];
	for(int i=n;i>=1;i=~-i){
		if(bj[a[i]]==0){
			if(i!=n){
				g[a[i+1]].push_back(a[i]);
			}
		}
		bj[a[i]]=i;
		ans[a[i]]++;
	}
	dfs(a[n]);
	for(int i=1;i<=m;i=-~i)cout<<ans[i]<<' ';
	return 0;
}
/*
主要的难点在于，一个区间可能在某一局没有被取到，在某一局又会被取到。
那我们果断打暴力。
然后发现使用bitset优化时随机数据卡不掉！？
那我们要想办法构造一组卡的数据
考虑什么数据会把我们卡到极限
似乎全部是一的是最难跑的
那我们试一试吧。 
直接卡到了极限
但是似乎我们可以特判掉这一种
但其他的可就不好说了
但愿ccf数据是随机的
或者说96分的都是随机的
那我们思考一下正解是什么
一个数有贡献当且仅当他没有被覆盖且他是最后一个数
还有一个惊人的性质：一个数只要被遍历到一次，就对答案有贡献
如果一个数可以被遍历到，当且仅当这个数是第一个
或者他是一个可以遍历到的数的最后一个的后一个
那我们对第二种情况连边
不，带siz的并查集即可维护
好吧，其实不行，因为连边连的是有向边
那好像也可以，连出来任何时候一定为一棵树，那么直接统计siz即可 
*/
/*
rp++
*/
