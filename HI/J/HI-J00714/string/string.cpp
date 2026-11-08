#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int n,len,ans;
char s[50001000];

int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%d",&n);
	for (int x,i = 1;i <= n;i++) {
		char c[5];
		scanf("%d%s",&x,c+1);
		for (int j = len+1;j <= len+x;j++) s[j] = c[1];
		len += x;
	}
	for (int i = 1;i <= len/2;i++) {
		if (s[i] != s[len-i+1]) ans++;
	}
	printf("%d",ans);
	fclose(stdin);
	fclose(stdout);
	return 0;
}
