#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int N=5e5+5,M=3e5+5;
int n,m,a[N],flaga=1,ans[M],flag[N];
stack<int> st;
void solvea(){//特殊性质A，期望得分（n>5000) 4pts
	for (int i=1;i<=n;i++) ans[a[i]]++;
	for (int i=1;i<=m;i++){
		ans[i]+=ans[i-1];
		cout << ans[i] << " ";
	}
}
void solve(){//O(n^2)暴力，期望得分 48pts
	for (int k=1;k<=n;k++){
		for (int i=k;i<=n;i++){
			if (flag[a[i]]){
				while(st.top()!=a[i]){
					flag[st.top()]=0;
					st.pop();
				}
			}
			else{
				flag[a[i]]=1;
				st.push(a[i]);
			}
		}
		while(!st.empty()){
			ans[st.top()]++;
			flag[st.top()]=0;
			st.pop();
		}
	}
	for (int i=1;i<=m;i++) cout << ans[i] << " ";
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for (int i=1;i<=n;i++){
		cin >> a[i];
		if (a[i]<a[i-1]) flaga=0;
	}
	if (flaga) solvea();
	else solve();
	return 0;
}
/*
9:23 开T4 还剩 2.5h 优势在我
看样子是个模拟？题面这么长
9:28 读完题 & 理解题意
感觉不像模拟
应该是思维题/ad-hoc类型的（后来发现其实也不是）
看了眼特殊性质，B 是何意味，难道是正解提示？
9:36 WDF这个card4.ans怎么是乱码，我活到头了？
9:48 在高人指点下解决了乱码的问题，估计是因为 Linux 和 Windows 不兼容的关系
9:51 用 Dev-C++ 打开后自己重制了一版 card4.ans
9:52 先写O(n^2)暴力+特殊性质A
9:59 完成特殊性质A & 通过下发样例4
（输出也是乱码，感觉是底层编码逻辑的问题，不过直接cmd fc比较找不出差异赛时就不研究这个了）
10:08 暴力写挂（RE）了？别搞
10:09 每一轮开始的时候忘记重置flag了/bangbangt
10:12 暴力写完后跑了下大样例检测下正确性顺便上了 WC
10:15 通过下发样例，O(n^2)暴力正确性没有问题
再想 30min 如果还没有思路就换 Linux 系统测试了
10:18 考虑记录每个卡牌上一次的出现位置（若首次出现则为0）？
10:20 有点感觉 好像可以从后往前模拟
10:30 好像是伪了，但是看数据范围正解应该就是 O(n)，再想想
10:50 不搞 T4 了，换 Linux 测编译
11:36 尝试与 NOI Linux 系统大战 40min 最后大败而归 最后关头测测边界吧 
11:50 检查完了所有cpp文件并删除了其他文件
文件读写已检查 
文件命名格式已检查
long long 已检查 
总期望得分 100+100+100+52=352pts，希望不要爆零不要挂分 
RP++! 
*/
