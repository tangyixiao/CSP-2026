#include<bits/stdc++.h>
using namespace std;
const int N=500010;
int n,m,ans[N],a[N],desk[N],tot=0;
inline int read() {
	int x=0,f=1;
	char ch=getchar();
	while(ch<'0'||ch>'9') {
		if(ch=='-') f=-1;
		ch=getchar();
	}
	while(ch>='0'&&ch<='9') {
		x=x*10+ch-'0';
		ch=getchar();
	}
	return x*f;
}
int main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	n=read(),m=read();
	for(int i=1;i<=n;i++) {
		a[i]=read();
	}
	for(int i=1;i<=n;i++) {
		tot=0;
		for(int j=i;j<=n;j++) {
			for(int k=1;k<=tot;k++) {
				if(desk[k]==a[j]) {
					tot=k-1;
					break;
				}
			}
			desk[++tot]=a[j];
		}
		for(int j=1;j<=tot;j++) ans[desk[j]]++;
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
	cout<<"\n";
	return 0;
}
/*
洛谷账号guopi壶关喵qwq 
08:12
到场
欸怎么登不进系统
哦系统密码是123，账号密码是准考证号，又饭堂
08:18
登入账号，并打好缺省源 
08:26
while(true) ++rp;
08:29
while(true) ++rp;
08:30
``` 
Trick||Treat!
```
开T1
08:45
过T1
开T2
woc怎么没思路？？
啊不会100pts退场吧
开T3
10:00
T3好诡异的数位DP
1h没过大样例
滚回去做T2
10:10
欸好像可以用双指针做 
10:37
过T2 
继续做T3
10:42
整理了一下思路（草稿纸orz）
敲起来顺多了
10:56
过了T3的所有大样例
开T4 
11:04
？开火车？ 
像是一个区间问题
O(n^3)思路很明确
11:21
打完O(n^3)暴力
waq快想正解啊！
......
好像没时间了 
8pts也是pts啊！
啊不管了跑路了
11:28
检查完freopen
坐等end
哎不行把下午可能要用的模板打一下
11:33
好吧好像忘了怎么打Tarjan
我常常追忆过去......
完了树剖怎么也忘了
11:43
......
11:50
while(true) rp++;
11:55
交游记qwq
（逆天文笔） 
*/