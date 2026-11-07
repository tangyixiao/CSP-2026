#include<bits/stdc++.h>
using namespace std;
using ll=long long;
ll n,m,a[510000],c[510000],pre[510000],ans[510000],tot;
bool add[510000],A,B;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i],A&=(a[i]>=a[i-1]);
	if(n<=5000){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++)add[j]=0,pre[j]=0;
			tot=0;
			for(int j=i;j<=n;j++){
				if(pre[a[j]]){
					for(int k=pre[a[j]]+1;k<=tot;k++){
						pre[c[k]]=0;
					}
					tot=pre[a[j]]-1;
				}
				c[++tot]=a[j];
				pre[a[j]]=tot;
			}
			for(int j=1;j<=tot;j++)add[c[j]]=1;
			for(int i=1;i<=m;i++)if(add[i])ans[i]++;
		}
	}else if(A){
		for(int i=1;i<=n;i++){
			if(a[i+1]!=a[i])ans[a[i]]=i;
		}
	}
	for(int i=1;i<=m;i++)cout<<ans[i]<<' ';
	return 0;
}
/*
J组真简单，估分352:)

提前写一下游记吧，马上就要退役了。

08：43 完成T1，应该是一道红题吧❤
09：08 完成T2，橙题差不多了😃
09：32 完成T3，黄题吧😁
09：33~10：22 睡一会，早上都没睡醒💤
10：42 写完T4的48pts的n^2暴力，至于难度嘛……反正我不会就把它估成青题😏
10：43~10：48 写游记嘟嘟嘟😜
11：00 写完T4 A性质😋
11：07 发现其他部分分都是一坨大的，严肃摆烂🤢
11：14 发现T1的D后面是F，差点被阴了😓
11：16 666，T4 freopen没开🤯
11：55 继续睡觉嘟嘟嘟💤

可恶的青题毁了我的AK梦……qwq😥

【数据删除】学校的神秘小板凳坐得我屁股疼，哪个神人发明的这玩意😤

话说小游戏在哪来着，可恶，我竟然忘了，只能发呆了
*/