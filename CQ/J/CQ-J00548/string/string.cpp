#include<cstdio>
int constexpr N = 2e5 + 1;
int a[N], n, no1, ofs1, no2, ofs2;
long long l;
char c[N], s[2];
int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	scanf("%d", &n);
	for(int i = 1;i <= n;i++) {
		scanf("%d%s", &a[i], s);
		c[i] = s[0];
		l += a[i];
	}
	/*
	for(int i = 1;i <= n;i++) {
		printf("%d %c\n", a[i], c[i]);
	}
	*/
	long long res = 0;
	no1 = 1, no2 = n;
	ofs1 = 1, ofs2 = 1;
	while(no1 < no2) {
		//printf("[%d:%d], [%d:%d]: %lld\n", no1, ofs1, no2, ofs2, res);
		if(a[no1] - ofs1 + 1 < a[no2] - ofs2 + 1) {
			res += (a[no1] - ofs1 + 1) * (c[no1] != c[no2]);
			ofs2 += a[no1] - ofs1 + 1;
			no1++, ofs1 = 1;
		}
		else if(a[no1] - ofs1 + 1 == a[no2] - ofs2 + 1) {
			res += (a[no1] - ofs1 + 1) * (c[no1] != c[no2]);
			no2--, ofs2 = 1, no1++, ofs1 = 1;
		}
		else {
			res += (a[no2] - ofs2 + 1) * (c[no1] != c[no2]);
			ofs1 += a[no2] - ofs2 + 1;
			no2--, ofs2 = 1;
		}
	}
	/*
	if(no1 == no2) {
		if(ofs1)
	}
	*/
	printf("%lld", res);
	return 0;
}
