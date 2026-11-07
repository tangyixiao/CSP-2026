#include <bits/stdc++.h>
using namespace std;
/*
可以看得出，当模拟出第一次的牌序后
每次可以删除第一张牌，若那一张已被删除，那么就恢复后续到下一张的所有牌，并在恢复期间模拟是否有再次收走的牌
然后判定完之后，可以计算剩余牌的数量，累加进总数中
至少有以下几个变量：
总计数器 cnt[n]，用于输出
单次计数器，随着删除/添加牌而更改 cnt2[n]
牌数 n
每张牌的顺序 a[n]
判定这张是否是拿走的第一张牌 b[n]
历史中是否有这张牌, c[i]表示上次出现位置 c[n] 

9:13 b 用不着，判定c 就行 
9:53 发现有点像栈 
10:02 证明是栈，且十分方便 
10:05 在过样例7~9时又出现了问题，稍微有点不耐烦了 
11:08 前面玩了会游戏 
11:15 稍微又改了一下代码，稍微还是有点问题 
*/
//int n, m;
//int cnt[500005], cnt2[500005], a[500005];
//int c[500005];
//void adding() { // 添加数据至总数组中 
//	for (int i = 1; i <= m; i++){
//		cnt[i] += cnt2[i];
//	}
//}
//int main(){
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++){ // 第一次模拟 
//		cin >> a[i];
//		if (c[a[i]]){
//			for (int j = c[a[i]]; j < i; j++){
//				cnt2[a[j]]--;
//			}
//		}c[a[i]] = i;
//		cnt2[a[i]]++;
//	}
//	
//	adding();
//	for (int r = 2; r <= n; r++){
//		memset(cnt2, 0, sizeof(cnt2));
//		memset(c, 0, sizeof(c));
//		for (int i = r; i <= n; i++){ // 第一次模拟 
//			if (c[a[i]]){
//				for (int j = c[a[i]]; j < i; j++){
//					cnt2[a[j]]--;
//				}
//			}c[a[i]] = i;
//			cnt2[a[i]]++;
//		}adding();
//	}
//	for (int i = 1; i <= m; i++) cout << cnt[i] << " ";
//	return 0;
//} 
// 上述为第一次代码实验
int n, m, a[500005];
int cnt1[300005], cnt2[300005];
int cnt3[300005];
stack <int> stk;
int lft[300005];
int cnt = 0;
int main(){
	cin >> n >> m;
	for (int i = 1; i <= n; i++){
		cin >> a[i];
		cnt3[a[i]]++;
	}
	for (int i = 1; i <= m; i++){
		if (cnt3[i] <= 1) cnt++;
	}
	for (int _ = 1; _ <= n; _++){
		memset(cnt2, 0, sizeof(cnt2));
		memset(lft, 0, sizeof(lft));
		cnt3[a[_ - 1]]--;
		if (cnt3[a[_ - 1]] == 1) cnt++;
		if (cnt == m){
			for (int i = 1; i <= m; i++) cnt1[i] += cnt3[i];
		}
		for (int i = _; i <= n; i++){
			if (lft[a[i]]){
				while (stk.size() >= lft[a[i]]){
					cnt2[stk.top()]--;
					stk.pop();
				}
			}
			stk.push(a[i]);
			cnt2[a[i]]++;
			lft[a[i]] = stk.size();
		}for (int i = 1; i <= m; i++) cnt1[i] += cnt2[i];
	}
	for (int i = 1; i <= m; i++) cout << cnt1[i] << ' ';
	return 0;
} 
