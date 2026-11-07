#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int n,m,ans,a[N],f[N],now;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>m;
	now=n;
	for(int i=1;i<=n;i++)f[i]=1;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int j=30;j>=0;j--){
		queue<int>q;
		for(int i=1;i<=n;i++){
			if(f[i]){
				if(!(a[i]&(1<<j))){
					q.push(i);
				}
			}
		}
		if(q.size()<=now-m){
			now-=q.size();
			while(q.size()){
				f[q.front()]=0;
				q.pop();
			}
			ans+=(1<<j);
		}
	}
	cout<<ans<<"\n";
	return 0;
}
/*
8:40 切完 T1
9:00 切完 T2 
9:20 切完 T3
9:40 思考 T4 失败，小恐龙 5480 
9:55 推出 T4 正解
10:10 写完代码，测完样例 
10:15 Linux 编译通过
11:00 来口士力架，检查 
11:05 检查无误，继续玩小恐龙 ing 
11:20 小 恐龙 10273 分 去玩冲浪了 
11:30 冲浪 开启 75% 页面，高可视度 11209
11:35 最终检查无误（只有 T2 要开 long long） 
解压密码 Trick||Treat!
万圣节是什么时候来着 
估计：红-橙-（橙-黄）-黄 
这次难度这么低，我这个蒟蒻都能 AK 了。
希望下午 ASCII(67),ASCII(67),ASCII(70)良心点 ，S让我拿到2= 。 
桌面上的“考生勿动” 到底是什么，有入知道吗 
HE-S00397
HE-J00575 
*/
