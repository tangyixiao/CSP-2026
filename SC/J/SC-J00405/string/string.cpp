#include<bits/stdc++.h>
using namespace std;

const int N = 2e5 + 10;
int n;
long long a[N];
char c[N];

long long ans, Len;

int main(){
	
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	
	cin >> n;
	for(int i = 1; i <= n; ++i){ 
		cin >> a[i] >> c[i];
		Len += a[i];
	}
	if(Len % 2 == 1) Len++;
	
	long long l = 1;
	for(int i = 1, j = n; i <= n && j >= 1 && i < j; ){
		if(l >= Len / 2) break;
		if(c[i] == c[j]){ // 字符相同
			if(a[i] < a[j]){
				a[j] -= a[i];
				l += a[i];
				i++;
			}
			else if(a[j] < a[i]){
				a[i] -= a[j];
				l += a[j];
				j--;
			}
			else{
				l += a[i];
				i++;
				j--;
			}
		}
		else{
			if(a[i] < a[j]){
				a[j] -= a[i];
				if(l + a[i] - 1 > Len / 2){
					a[i] -= Len / 2 - l + 1;
					ans += a[i];
					l += a[i];
					break;
				}
				ans += a[i];
				l += a[i];
				i++;
			}
			else if(a[j] < a[i]){
				a[i] -= a[j];
				if(l + a[j] - 1 > Len / 2){
					a[j] -= Len / 2 - l + 1;
					ans += a[j];
					l += a[j];
					break;
				}
				ans += a[j];
				l += a[j];
				j--;
			}
			else{
				l += a[i];
				ans += a[i];
				i++;
				j--;
			}
		}
	}
	cout << ans;
	return 0;
}
/*

预估 100

心态有点炸, 先看下一道题
8:55 - 9:42

10:58 通过所有大样例 幸好抢救了回来 大的问题应该没了

T2

题意

字符串分为 n 段
第 i 段长为 a[i], 都为 c[i]
求最少改变多少个位置后变为回文串

思路
设总长为 len = sum{a[i]}
最大代价一定不超过 len / 2

从中间分开, 遇到相同段跳过
不同段计算有多少字符不同


*/