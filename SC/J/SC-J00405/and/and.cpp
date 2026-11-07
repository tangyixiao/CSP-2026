#include<bits/stdc++.h>
using namespace std;

const int N = 2e5 + 10;
int n, m;
long long a[N];

long long ans, num[N], s[N];

bool cmp(long long x, long long y){
	return x > y;
}

long long To_Two(long long x){
	long long y = 0, z = 0;
	while(x){
		if(x % 10 == 1) y += (1LL << z);
		x /= 10;
		z++;
	}
	return y;
}

long long power(long long x, long long y){
	long long z = 1;
	for(long long i = 1; i <= y; ++i) z *= x;
	return z;
}

void solve1(){
	for(int i = 1; i <= n; ++i) ans = max(ans, a[i]);
	cout << ans;
}

void solve2(){
	ans = a[1];
	for(int i = 2; i <= n; ++i) ans &= a[i];
	cout << ans;
}

void solve3(){
	for(int i = 1; i <= n; ++i){
		for(int j = 1; j <= n; ++j){
			if(i != j) ans = max(ans, a[i] & a[j]);
		}
	}
	cout << ans;
}

void solve4(){
	for(int i = 1; i <= n; ++i){
		if(i == 1) s[i] = a[i];
		else s[i] = s[i - 1] & a[i];
	}
	for(int i = 1; i <= n; ++i) ans = max(ans, s[i] & a[i]);
	cout << ans;
}

int main(){
	
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	
	cin >> n >> m;
	for(int i = 1; i <= n; ++i) cin >> a[i];
	
	if(m == 1){
		solve1();
		return 0;
	}
	if(m == n){
		solve2();
		return 0;
	}
	if(m == 2 && n <= 2000){
		solve3();
		return 0;
	}
	
	if(m == n - 1){
		solve4();
		return 0;
	}
	
	for(int i = 1; i <= n; ++i){
		for(long long j = 30; j >= 0; --j){
			if(a[i] >= (1LL << j)){
				a[i] -= (1LL << j);
				num[i] += power(10, j);
			}
		}
	}
	
	sort(num + 1, num + 1 + n, cmp); // O(nlogn)
	
	for(int i = 1; i <= n; ++i){
		if(i == 1) s[i] = To_Two(num[i]);
		else s[i] = s[i - 1] & To_Two(num[i]);
	}
	
	for(int i = 1, j; i <= n - m + 1; ++i){ // 左端点
		j = i + m - 1;
		if(i == 1) ans = max(ans, s[j]);
		else ans = max(ans, s[j] & s[i - 1]);
	}
	if(ans == 0 && m == 2){
		int i = 2;
		while(ans == 0){ 
			ans = To_Two(num[i] & num[i + 1]);
			i++;
		}
	}
	cout << ans;
	return 0;
}
/*

预估 未知
可能会被卡 (应该不至于) ?
思路有点问题

11:21 多缝了一些分

还有点问题, 先不管了
10:22

T3

n 个数 恰好选 m 个
求最大 与 值

x & x = x
x & y & y = x

每一位互不影响
要使结果尽量大, 每个数每一位尽量都为 1



*/