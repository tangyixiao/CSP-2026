#include<bits/stdc++.h>
using namespace std;
const int N = 5e5+10;
const int M = 3e5+10;

int n,m;
int a[N];
int bm[M];//标记每张牌留下的次数  
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for (int i = 0;i < n;i ++) cin >> a[i];
	
	for (int i = 0;i < m;i ++) bm[i] = 0;//清零 
	for (int i = 0;i < n;i ++){//第i局游戏 
		int xt[M];
		int ct = 0;
		for (int k = i;k < n;k ++){//发第i张牌 
			for (int x = 0;x < ct;x ++){//寻找有没有重复的 
				if (xt[x] == a[k]){//找到重复的 
					for (int y = x;y <= ct;y ++) xt[y] = 0;
					ct = x;
				}
			}
			xt[ct] = a[k];
			ct ++;
		}
		for (int i = 0;i < ct;i ++) bm[xt[i]] ++; 
	}
	
	for (int i = 1;i <= m;i ++){
		cout << bm[i] << " ";
	}

	return 0;
}
