#include<bits/stdc++.h> 
using namespace std;
#define myubi return
int a[500005],b[300005],c[300005];
void shou(int k){
	memset(b+k+1,0,sizeof(b)-k);
	return;
}
int main(){//打出有的牌就清空该牌后面的所有牌 
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int k=n;k>0;k--){
		int cnt=1;
		for(int i=1;i<=k;i++){
			if(b[a[i]]==0){
				b[a[i]]=cnt;//x在cnt处 
				cnt++;
			}
			else{
				cnt=b[a[i]]+1;
				shou(b[a[i]]);
			}
		}
		for(int i=1;i<=m;i++)
			if(b[i]!=0){
				c[i]++;
			//	cout<<i;
				b[i]=0;
			}
		//cout<<endl; 3 
		for(int i=1;i<=k;i++) {
			a[i]=a[i+1];
			//cout<<a[i]<<" ";
		}
			//cout<<endl;
	}
	for(int i=1;i<=m;i++)
		cout<<c[i]<<" ";
	myubi 0;
}
/*
想进奇葩大赏 doge
T1 8:45
T2 9:21 
T3 9:45
T4 棍木:棍木 
看样子T4应该是没了，T3打了个暴力只优化了一下，一想到下周还要半期考9科就有点炸钢。
已经学了3年c++了，但就好像是被爆零星神瞥视了一样，每次都在莫名其妙的地方爆零。
希望这次不会吧。
同龄人都打上NOIP了，我J组还没拿过一等奖(破绷了) ，也许是真的没什么天赋啊 
为了今天的比赛昨天我甚至没有打崩铁和火影！！！！！！！ 
去年我们学校的 Asoccia(好像叫这个吧) 怒斥了学校和€€￡，这里我就不说了 但今年报名费是真贵啊，18斤牛肉(bushi) 
中考确实带走了我很多朋友，显得高中有些太乏味了，感觉学的还算比较好的只有化学能进年纪前十了 
现在在犹豫是选物化生还是物化地，虽说生物简单点但竞争有点大，但是地理做起来像赤石一样
下午再看看S组强度吧
再爆零我真退役了
—————————— 
在人海的节奏随波，
但只能在昨天诉说，
梦想分数   化作泡沫
却只能寄托
可能有少数人记得
回忆 却成为了枷锁
请你遗忘我
请你遗忘我
月初冲分的村里  
整理对局的思绪
你曾是我的保底
我最自信的保底
可是我已无法找到自己的中场
像在思路之间 设了防
我们的羁绊并非点不亮
只是被困在那个梯度榜
阿巴阿巴阿巴阿巴阿巴阿巴阿巴 
—————————— 
LGID:myubi(UID忘了 嘻嘻)
*/