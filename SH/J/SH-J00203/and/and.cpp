#include<bits/stdc++.h>
using namespace std;
int a[200001];
bool cmp(int a, int b){return __builtin_popcount(a)>__builtin_popcount(b);}
int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m;
	scanf("%d %d", &n, &m);
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	if(n<=20){
		int ans = 0;
		for(int i = 0; i <= 1<<n; i++){
			if(__builtin_popcount(i)!=m)continue;
			int k = -1;
			for(int j = 0; j < n; j++){
				if((i>>j)&1){
					if(k<0)k = a[j];
					else k &= a[j];
				}
			}
			ans = max(ans, k); 
		}
		printf("%d", ans);
	}
	else if(m==1){
		int ans = 0;
		for(int i = 0; i < n; i++){
			ans = max(ans, a[i]);
		}
		printf("%d", ans);
	}
	else if(m==2&&n<=10000){
		int ans = 0;
		for(int i = 0; i < n-1; i++){
			for(int j = i+1; j < n; j++){
				ans = max(ans, a[i]&a[j]);
			}
		}
		printf("%d", ans);
	}
	else if(m==n){
		int ans = a[0];
		for(int i = 1; i < n; i++){
			ans &= a[i];
		}
		printf("%d", ans);
	}
	else{
		sort(a, a+n, cmp);
		int ans = a[0];
		for(int i = 1; i < n; i++){
			ans &= a[i];
		}
		printf("%d", ans);
	}
	return 0;
}
