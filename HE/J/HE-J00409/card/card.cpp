#include<bits/stdc++.h>
using namespace std;
int n,m,a[500010],b[300010],nxt[500010],ans[300010]; 
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=n;i>=1;i--){
		nxt[i]=b[a[i]];
		if(!b[a[i]])b[a[i]]=i;
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(nxt[j]){
				j=nxt[j]-1;
			}
			else{
				ans[a[j]]++;
			} 
		}
	} 
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}
/*
9:48看T4
大模拟？ 
上个厕所去 

5e5模不了一点 
这什么东西 
不会

阿巴阿巴阿巴阿巴
滚木
 
啊啊啊饿啊啊饿饿饿啊啊饿饿啊饿饿哦哦额啊额啊谔谔饿饿饿啊啊啊啊啊 
这**咋写 

半小时了想出来了棍母 
>->o zzZ

别搞啊
真不会 
AK不了了 

没有任何思路

前面每删一个对后面都有影响啊
反着来也不行
 
先写个n^2的吧 
n^2的写对了
不会正解

我是区 
（蠕动）（蠕动）（蠕动）（蠕动）（蠕动）（蠕动）（蠕动）（蠕动）（蠕动） 

？为什么暴力跑这么快
大样例不到一秒就过了 
[48,100]
*/

