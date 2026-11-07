#include<iostream>
char s1[5],s2[5];
int cnt[10],c1,c2;
signed main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	scanf("%d %s %d %s",&c1,s1 + 1,&c2,s2 + 1);
	if(c1 == c2) {
		putchar('1');
		if(s1[1] == s2[1] && s1[2] == s2[2]) {
			putchar('1'),cnt[s1[3] - 'A'] ++,cnt[s2[3] - 'A'] ++;
			if(cnt[5] + cnt[3] == 2 || cnt[0] + cnt[1] + cnt[2] == 2) {
				putchar('1');
				if(cnt[5] || cnt[1]) puts("1");
				else puts("0");
			} else puts("00");
		} else puts("000");
	} else puts("0000");
	return 0;
}
