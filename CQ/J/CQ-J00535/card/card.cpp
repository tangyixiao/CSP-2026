#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],rd[500005],dp[500005],lst[300005];
vector<int> vec[500005];queue<int> que;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	cin>>n>>m;for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++) {
		if(lst[a[i]]) vec[lst[a[i]]].push_back(i),rd[i]++;
		lst[a[i]]=i;
	}
	for(int i=1;i<=m;i++) if(lst[i]!=n) vec[lst[i]].push_back(lst[i]+1),rd[lst[i]+1]++;
	for(int i=1;i<=n;i++) if(!rd[i]) que.push(i);
	while(!que.empty()){
		int t=que.front();que.pop();dp[t]++;
		for(int i:vec[t]){
			rd[i]--;dp[i]+=dp[t];
			if(!rd[i]) que.push(i);
		}
	}
	for(int i=1;i<=m;i++) {
		if(i<m) cout<<dp[lst[i]]<<' ';
		else cout<<dp[lst[i]];
	}
	return 0;
}
/*
不是T4考啥啊，怎么DAG都炸出来了 
T4考图论这辈子有了 

现在是10:22，我已经把4道都写完了，这波操作牛不牛逼，我要睡了备战S了（bushi
那显然不行啊，我只测了大样例，没有测自测数据。

好吧先来说一下情况：

T1 分支条件
T2 神秘模拟
T3 简单贪心
T4 有向无环
J最简单的一集

CSP-S RP++;希望我能做出来S组前两题 

大样例只给2e5何以苏？害得我vector差点开小了

笑点解析：T2写得最长，只有T3是nlogA 

oh不我没有带吃的，这个比较弱，剩下90分钟只能用来自测和睡大觉了

算了复习一下Tarjan吧免得下午T1/T2考连通性坠机，太久没考了（？实则没考过！ 

void Tarjan(int x){
	st.push(x);dfn[x]=++cnt,Ins[x]=1;
	for(int i:vec[x]){
		if(!dfn[x]){
			Tarjan(x);
			low[x]=min(low[x],low[i]);
		}else if(Ins[x]) low[x]=min(low[x],dfn[x]);
	}
	if(dfn[x]==low[x]){
		++totscc;
		while(st.top()!=x) scc[totscc].push_back(st.top()),st.pop();
		scc[totscc].push_back(st.top()),st.pop();
	}
}
这波操作牛不牛逼》！

坏习惯越来越多了

T4暴力还挺好打的，所以我要测T4

我要热死了不想写67676767 

已经测完T2了，T2没有问题 

我说白了他为什么要走？在这坐到12点不好吗 

原来是去尿了 

糟了为什么余下十五分钟不能上厕所？我的**要炸了，算了忍一忍，但是为社么我的臀那么痛？酸死我力！ 
*/
