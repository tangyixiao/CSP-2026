#include<bits/stdc++.h>
using namespace std;


const int N = 2e5 + 10;

int a[N];
int b[N];

int n, m;

int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	scanf("%d%d", &n, &m);
	for(int i = 1;i <= n;i ++){
		scanf("%d", &a[i]); 
	}	
	int ii = n;
	for(int i = 30;i >= 0;i --){
		int cnt = 0;
		int k = (1 << i);
		for(int j = 1;j <= ii;j ++){
			if(a[j] & k){
				b[++cnt] = a[j];
			}
		}
		if(cnt >= m){
			ii = cnt;
			for(int i = 1;i <= ii;i ++){
				a[i] = b[i];
			}
		}
	}
	int ans = a[1];
	for(int i = 1;i <= m;i ++){
		ans &= a[i];
	}
	
	printf("%d\n", ans);
	
	return 0;
} 