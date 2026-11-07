#include<bits/stdc++.h>
using namespace std;
char s[1010000], tot = 0;
int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		int x, c;
		scanf("%d", &x);
		getchar();
		scanf("%c", &c);
		for(int i = 1; i <= x; i++){
			s[++tot] = c;
		}
	}
//	for(int i = 1;i <= tot; i++) printf("%c", s[i]);
//	printf("\n"); 
//	scanf("%s", s + 1);
	int len = strlen(s);
//	printf("%d\n", len);
	int ans = 0;
	for(int i = 1; i <= tot / 2; i++){
		if(s[i] != s[tot - i + 1]) ans++;
	}
	printf("%d", ans);
	return 0;
}
