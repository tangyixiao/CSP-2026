//priority_queue<int, vector<int>, greater<int>>;
#include<bits/stdc++.h>
using namespace std;
const int N=500005, M=300005;
int a[N];
int sum[M];
int vis[M];
int n;
int m;
int last=0; 
int cj;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	//freopen("card4.in", "r", stdin);
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i=1; i<=n; i++){
		cin >> a[i];
	}
	for (int i=1; i<=n; i++){
		for (int j=i; j<=n; j++){
			if (!vis[a[j]]){
				vis[a[j]] = j;
			}else{ 
				for (int k=vis[a[j]]; k<=j; k++){
					vis[a[k]] = 0;
				}
				vis[a[j]] = j;
			}
		}
		for (int j=1; j<=m; j++){
			if (vis[j])
				sum[j]++;
		}
		for (int j=i; j<=n; j++){
			vis[a[j]] = 0;
		}
	}
	for (int i=1; i<=m; i++){
		cout << sum[i] << " ";
	}
	return 0;
} 
/*
题意简化：共 n 局游戏，第 i 局最终结果是 i ~ n的末尾的最长不同字串 
现在就变成了一个计数问题 
*/
/*
4 3
1 2 1 3
*/
/*
10 3
3 1 2 1 3 2 3 1 2 1
*/
//时间复杂度：O（n^3）
//预估得分：24 
