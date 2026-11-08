#include <bits/stdc++.h>
using namespace std; 
const int N=5e5+5;
int n,m,rt,a[N],la[N],sum[N],v[N];
long long ans[N];
vector<int> g[N];
void dfs(int u){
	long long cnt=sum[u];
	for(int v:g[u]){
		dfs(v);
		cnt+=ans[v];
	}
	ans[u]=cnt;
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		la[a[i]]=i;
		sum[a[i]]++;
	}
	for(int i=1;i<=m;i++){
		if(la[i]==n) {
			rt=i;
			continue;
		}
		g[a[la[i]+1]].push_back(i);
	}
	dfs(rt);
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}
//8:45 T1
//9:02 T2
//9:49 T3
//哦不，这个T4怎么这么难
//10:36 终于想到了关键，我好像会做了
//10:40 不对，这好像只是把O(N^2)优化到了O(NM),只多了8分。
//不管了，先去上厕所。 
//想到了M^2的方法，然而并没有什么用。 
//似乎又想到了，可以预处理。我可能做出来了。
//11:03 多么渺小的T4啊。
//炸鱼成功！ 
//IAKCSP/J!!!!! 
//IAKCSP/J!!!!! 
//IAKCSP/J!!!!! 
//IAKCSP/J!!!!! 
//IAKCSP/J!!!!! 
//rp++
//不要挂分 
