#include <bits/stdc++.h>
#define int long long 
using namespace std;
const int N = 5e5 + 5;
const int M = 3e5 + 5;
int n,m; 
int arr[N];
int arr1[M];
bool vis[N];
int ans[M];
signed main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for (int i = 1;i <= n;i++) {
		cin >> arr[i];
	}
	for (int i = 1;i <= n;i++) {
		memset(arr1,0,sizeof(arr1));
		memset(vis,0,sizeof(vis));
		for (int j = i;j <= n;j++) {
			arr1[arr[j]]++;
			if (arr1[arr[j]] == 2) {
				for (int k = j - 1;k >= i;k--) {
					if (arr[k] == arr[j]) {
						vis[k] = 1;
						break;
					}
					vis[k] = 1;
				}
				arr1[arr[j]]--;
			}
		} 
		for (int j = i;j <= n;j++) {
			if (!vis[j]) {
				ans[arr[j]]++;
			}
		}
	}
	for (int i = 1;i <= m;i++) {
		cout << ans[i] << " ";
	}
	return 0;
} 
/*
3 1
1
2 1
1
3 1
2 1
3 1
1
2 1
1


10:52 已老实求放过

11:00 我是不是要默写追忆来着
我常常追忆过去……（忘词了对不起）

11:18 考神考神保佑我

11:22 好饿啊我考完要去逛赵一鸣！！！ 

11:23 突然发现我上次来山高考GESP也是坐在这里的欸

11:25 ？我旁边的人怎么电脑卡死了换位置了 

11:26 所以我记录这些东西的意义在哪 

11:37 时间过得好慢啊 

11:45 谁能告诉我linux存在的意义是啥 
*/
