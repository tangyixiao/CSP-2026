#include<bits/stdc++.h>
using namespace std;
const int maxn=5e5+6;
int n,m,a[maxn],ans[maxn];
bool vis[maxn];
deque<int> q;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++){
		memset(vis,0,sizeof(vis));
		for(int j=i;j<=n;j++){
			if(!vis[a[j]]){
				q.push_back(a[j]);
				vis[a[j]]=1;
			}
			else{
				while(!q.empty()&&q.back()!=a[j]){
					vis[q.back()]=0;
					q.pop_back();
				}
			}
		}
		while(!q.empty()){
			ans[q.back()]++;
			q.pop_back();
		}
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<' ';
	return 0;
}//调出来了！！！
//暴力模拟队列，预期得分50，开场190min 
//还有8min就要交了，祝自己rp++，写了这么多暴力，还是挺为自己骄傲的，无论结果如何，到底有没有挂分，我已经尽力了，就像我在S组初赛交卷前对自己说的那样：尽人事，听天命。
//新的一年继续努力吧，愿你心中有丘壑，眉目作山河，不问前程几许，只顾风雨兼程
//xcgmy，继续加油 