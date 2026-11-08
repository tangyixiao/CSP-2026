#include<cstdio>
int abs(int v) {
	return v > 0 ? v : -v;
}
int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	char c1[4], s1[4], c2[4], s2[4];
	scanf("%s%s%s%s", c1, s1, c2, s2);
	bool bflag = 1;
	if(c1[0] != c2[0] || c1[1] != c2[1]) {
		bflag = 0;
	}
	printf("%d", bflag);
	if(s1[0] != s2[0] || s1[1] != s2[1]) {	
		bflag = 0;
	}
	printf("%d", bflag);
	if(s1[2] <= 'C') {
		if(s2[2] > 'C') bflag = 0;
	}
	else {
		if(s2[2] <= 'C') bflag = 0;
	}
	printf("%d", bflag);
	if(abs(s1[2] - s2[2]) > 1) bflag = 0;
	printf("%d", bflag);
	//printf("%s %s %s %s", c1, s1, c2, s2);
	return 0;
}
