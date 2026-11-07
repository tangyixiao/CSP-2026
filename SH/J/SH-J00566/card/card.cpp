#include<bits/stdc++.h>
using namespace std;

int n, m;

const int N = 5e5+ 5;

long long card[N];
long long cnt[N]; 

stack<int> table;
stack<int> tmp;

void solve(int x){
	while(!table.empty()){
		int t = table.top();
	    if(t == x){//找到这张牌 
	        table.pop();//弹出此牌 
			while(!tmp.empty()){//清空暂存 
	    	    tmp.pop();
		    }
		    return;//结束 
	    }
	    table.pop(); //没找到，下一张 
	    tmp.push(t); //放入暂存 
	}
	while(!tmp.empty()){//发现没有这张牌，放回去 
		int tt = tmp.top();
	    tmp.pop();
	    table.push(tt);
	}
	return;
}

int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	
	memset(card, 0, sizeof(card));
	
	cin >> n >> m;
	
	for(int i = 1; i <= n; i++){
		cin >> card[i];
	}
	
	for(int i = 1; i <= n; i++){//模拟游戏 
	
	    while(!table.empty()){//新一轮游戏开始，清空桌面 
	    	table.pop();
		}
	    while(!tmp.empty()){//新一轮游戏开始，清空暂存 
	    	tmp.pop();
		}
		for(int j = i; j <= n; j++){//第i轮第j张牌打出
		     solve(card[j]);//操作 
		     table.push(card[j]);
		}
		//游戏结束， 统计
		while(!table.empty()){
			int ttt = table.top();
			table.pop();
			cnt[ttt]++;
		}
	}
	
	for(int i = 1; i <= m; i++){
		cout << cnt[i] << ' ';
	}
	
	return 0;
}
