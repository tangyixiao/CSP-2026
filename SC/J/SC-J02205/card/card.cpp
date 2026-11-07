/*
希望洛谷的代码大赏有我啊 
100+68+65+48 = 280可以退役了
第二题啥阴我居然没写出来
去年差4分希望今年多4分
这个键盘的空格怎么翘翘的
成外的铃声有点吓人其他还好，旁边大佬2h开睡太牛逼了 
我是考前还在打wx的 _Dreamweave，下辈子见呗！ 
*/ 
#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 10;
int a[N], vis[N], ans[N], nxt[N];
int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for(int i = 1; i <= n; i++) cin >> a[i];
	if(n <= 5000 && m <= 3000) {
		for(int i = 1; i <= n; i++) {
			for(int j = 1; j <= 3000; j++) vis[j] = 0, nxt[j] = 0;
			for(int j = i; j <= n; j++) {
					vis[a[j]]++;
				if(vis[a[j]] == 2) {
					for(int k = nxt[a[j]]; k <= j; k++) vis[a[k]] = 0;
					vis[a[j]]++;
				}
				nxt[a[j]] = j;
			}
			for(int j = 1; j <= m; j++) {
				ans[j] += vis[j];
			}
		}
		for (int i = 1; i <= m; i++) cout << ans[i] << " "; 
	}
	return 0;
} 