#include <bits/stdc++.h>
using namespace std;
//初始牌堆 
int Pai[500000] = {};
//table 上牌堆
int table[500000] = {}; 
//统计
int ment[500000] = {}; 

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	//总牌数 种类数 
	int tot, types;
	cin >> tot >> types;
	for (int i = 0; i < tot; i++) {
		cin >> Pai[i];
	}
	
	//局数 
	int k = 1;
	//遍历每局 
	while(k - 1 <= tot) {
		//table 上有 j 张牌 
		int j = 0;
		//第 k 局：该出第 i 张牌时 
		for (int i = k; i < tot; i++) {
			//判断桌上有无当前回合该出的牌
			for(int f = 0; f < j; f++) {
				if (table[f] == Pai[i]) {
					//清空第 f 及以后的 table 牌堆
					for (int s = j; s >= f; s--) {
						table[s] = 0;
						j--;
					}
					break;
				}
			}
			//出牌
			table[j] = Pai[i];
			j++;
		}
		//统计剩余的牌数
		for (int i = 0; i < j; i++) {
			ment[table[i]]++;
		}
		k++;
		
		//清空 
		for (int i = 0; i < j; i++) {
			table[i] = 0;
		}
	}
	for (int i = 0; i < types; i++) {
		cout << ment[i] << " ";
	}
 	
	return 0;
}