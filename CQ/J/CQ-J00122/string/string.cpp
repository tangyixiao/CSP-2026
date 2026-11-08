#include<bits/stdc++.h>
using namespace std;
namespace cqsunny{
	const int N = 2e5 + 10;
	int n; 
	int a[N];
	char b[N];
	int main(){
		freopen("string.in", "r", stdin);
		freopen("string.out", "w", stdout);
		scanf("%d", &n);
		for(int i = 1; i <= n; ++ i){
			scanf("%d", &a[i]);
			cin >> b[i];
		}
		long long ans = 0;
		int p1 = 1, p2 = n, s1 = a[1], s2 = a[n];
		while(p1 < p2){
			if(s1 < s2){
				s2 -= s1;
				if(b[p1] != b[p2]) ans += s1;
				++ p1;
				s1 = a[p1];
			}
			else if(s1 > s2){
				s1 -= s2;
				if(b[p1] != b[p2]) ans += s2;
				-- p2;
				s2 = a[p2];
			}
			else{
				if(b[p1] != b[p2]) ans += s1;
				++ p1, -- p2;
				s1 = a[p1], s2 = a[p2];
			}
		}
		printf("%lld", ans);
		return 0;
	}
}
int main(){
	return cqsunny::main();
}
