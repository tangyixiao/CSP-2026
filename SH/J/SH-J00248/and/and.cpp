//时间：大约62n,有点悬 
#include<bits/stdc++.h>
#define N 200009
using namespace std;

bool bin[N][32];
int n, m, a[N], cnt[32], ans;

void transform(){
	for(int i=1; i<=n; i++){
		int t = a[i], digit = 0;
		while(t > 0){
			bin[i][++digit] = t & 1;  //转换 
			cnt[digit] += t & 1; //当前二进制数位上1的数量增加 
			t >>= 1;
		}
	}
}

void clear(int p){
	for(int i=1; i<=31; i++){
		cnt[i] -= (int)bin[p][i];  //处理计数器 
		bin[p][i] = 1;  //数位改为1，方便and运算 
	}
}

int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	
	cin >> n >> m;
	for(int i=1; i<=n; i++) cin >> a[i];
	
	transform(); //转换成二进制 
	
	for(int i=31; i>=1; i--)
		if(cnt[i] >= m)  //是否可以在取恰好m个数的情况下满足结果的当前位数为1 
			for(int j=1; j<=n; j++)
				if(!bin[j][i]) clear(j); //这一位为0的数不要选 
	
	for(int i=1; i<=31; i++){
		int t = 1;
		for(int j=1; j<=n; j++) t = (t & bin[j][i]);
		ans += t << (i-1);
	}
	
	cout << ans;
	return 0;
}
