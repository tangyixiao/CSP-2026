#include<bits/stdc++.h>
using namespace std;

const int N = 200100;
int a[N], n, p = 0, a1[N];
char s[N], c;

int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	scanf("%d", &n);
	long long ans = 0;
	for(int i = 1; i <= n; i++){
		scanf("%d%c%c", &a[i], &c, &s[i]);
		a1[i] = a[i];
	}
	int r1 = 1, r2 = n;
	while(r1 < r2)
		if(a1[r1] >= a1[r2]){
			if(s[r1] != s[r2])
				ans += a1[r2];
			a1[r1] -= a1[r2--];
		}
		else{
			if(s[r1] != s[r2])
				ans += a1[r1];
			a1[r2] -= a1[r1++];
		}
	printf("%lld\n", ans);
	return 0;  
}
