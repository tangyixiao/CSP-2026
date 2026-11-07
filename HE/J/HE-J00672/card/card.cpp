#include<bits/stdc++.h>
using namespace std;

int n, m;
int d_len;     //桌面上总共有多少张牌(0-based) 
int a[500005];    //小 Z 的牌从上到下的点数 
int d[500005]; //游戏进行时桌面上的牌 
int ans[300005];  //ans[i]为点数为 i 的牌出现了几次 
int find_x(int x){    //返回x在 d 中的下标 , 没有则 -1 
	for(int i=0;i<d_len;i++)
		if(d[i] == x) 
			return i;
	return -1;
}
void full_d(int start){    //将d数组中start以后的数据改为 0  
	for(int i=start;i<d_len;i++) d[i] = 0;
	d_len = start;
}


int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i]; 
	//for循环，小k从第几章开始拿牌  
	for(int k=1;k<=n;k++){
		full_d(0);
		//for循环，暴力模拟小k拿牌  
		for(int i=k;i<=n;i++){
			int t = find_x(a[i]);
			if(t == -1){
				d[d_len] = a[i];
				d_len++;
			} 
			else{
				full_d(t);
				d[d_len] = a[i];
				d_len++;
			}
		}
		//统计d中各牌有多少张 
		for(int i=0;i<d_len;i++){
			int t = d[i];
			ans[t]++;
		}
	} 
	for(int i=1;i<=m;i++) cout<<ans[i]<<' ';
	
	
	return 0;
} 
