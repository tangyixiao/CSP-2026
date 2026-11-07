#include<bits/stdc++.h>
using namespace std;
//分析模拟的时间复杂度
/*
一共i局游戏，每局要模拟如下操作
1.打牌O(1)
2.收牌O(n)寻找i+O(n)删除操作 /O(1)预处理last[i]+删除操作 
3.模拟完后，剩余的牌在ans[]里++ O(n)

其中1.2.都是n次，所以为O(n)/O(n^2)
3.为O(n) 
每局游戏时间复杂度为O(n^2)/O(n^3)，对应48pts/24pts 

现在考虑如何将2优化成O(1)
考虑寻找操作怎么优化 
注意到其实牌的下标不一定要从1开始
因为可以用last[i]记录上一个出现的 i 的下标
考虑删除操作怎么优化
删除实际上是保留last[i]以左的内容
或者是将a[last[i]]指向a[i+1]
维护下标数组cur，每次换牌操作：cur[last[a[i]]] = cur[i]
统计答案：按cur枚举数组即可
每轮变化：a数组变化 

看起来可以实现 
出了很多问题，比如cur重叠
还是写24pts吧 
好像写出来了 
*/ 

int n , m;
int a[500005] , b[500005];
int last[300005] , v[500005];
int ans[500005];

int main(){
	freopen("card.in" , "r" , stdin);
	freopen("card.out" , "w" , stdout);
	cin >> n >> m;
	for(int i = 2 ; i <= n + 1 ; i++) cin >> a[i];
	for(int i = 1 ; i <= n ; i++){
		
		memset(last , 0 , sizeof(last));
		memset(v , 0 , sizeof(v));
		
		for(int j = 1 ; j <= n - i + 1 ; j++) b[j] = a[j+i];
		//cout << "b[]: ";
		//for(int j = 1 ; j <= n - i + 1 ; j++) cout << b[j] << " ";
		//cout << endl;
		//存在bug：若last[b[j]]被丢，无法找到新的last... 
		//已修正 
		for(int j = 1 ; j <= n - i + 1 ; j++){
			if(last[b[j]] == 0) last[b[j]] = j;
			else{
				if(v[last[b[j]]]) {
					for(int k = last[b[j]] ; k >= 1 ; k--)
						if(!v[k] && b[k] == b[j]){
							last[b[j]] = k;
							break;
						}
					if(v[last[b[j]]]) last[b[j]] = 0;
				}
				if(last[b[j]] == 0){
					last[b[j]] = j;
					continue;
				}
				for(int k = last[b[j]] ; k < j ; k++) v[k] = 1;
				last[b[j]] = j;
			}
		}
		//cout << "v[]: ";
		//for(int j = 1 ; j <= n - i + 1 ; j++) cout << v[j] << " ";
		for(int j = 1 ; j <= n - i + 1 ; j++)
			if(!v[j]) ans[b[j]]++;
	}
	for(int i = 1 ; i <= m ; i++) cout << ans[i] << " ";
	return 0;
	//期望得分：24pts 
} 
