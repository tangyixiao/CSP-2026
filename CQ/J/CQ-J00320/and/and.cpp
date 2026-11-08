#include<bits/stdc++.h>
#define int lint
using namespace std;
using lint=long long;
using llint=__int128;
using ldouble=long double;
const int MAX_N=2e5+10,INF=1e9;
struct Trie{
	int nxt[MAX_N][3],exist[MAX_N],trie_cnt=0;
	void init(){
		memset(nxt,-1,sizeof(nxt));
		memset(exist,0,sizeof(exist));
		trie_cnt=0;
	}
	void insert(int num){
		int pos=0;
		for(int j=30;j>=0;j--){
			int idx=(num>>j)&1;
			if(nxt[pos][idx]==-1) nxt[pos][idx]=++trie_cnt;
			pos=nxt[pos][idx];
			exist[pos]++;
		}
	}
};
int a[MAX_N];
int n,m;
Trie trie; 
int ans=0;
void dfs(int pos,int need,int res,int dep){
	if(pos==-1) return;
	ans=max(ans,res);
	int to_1=trie.nxt[pos][1],to_0=trie.nxt[pos][0];
//	cout<<pos<<" "<<need<<" "<<res<<" "<<to_1<<" "<<to_0<<"\n";
	if(to_1==-1) dfs(to_0,need,res,dep+1);
	else{
		if(trie.exist[to_1]<need) dfs(to_0,need-trie.exist[to_1],res,dep+1);
		else dfs(to_1,need,res+pow(2,30-dep+1),dep+1);
	}
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	trie.init();
	for(int i=1;i<=n;i++){
		cin>>a[i];
		trie.insert(a[i]);
	}
	dfs(0,m,0,1);
	cout<<ans;
	return 0;
}

