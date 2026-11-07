//1000 a
//567 b
//432 c
//1001 b
//
//1500st
//1000 a + 500 b
//
//找中间点
//计入数组t 
//
//i是块，j是回文的块 
//
//块a小于等于所需t；t减去a，a归零 ，cnt加上修改次数，i移动到下一位 
//块a大于所需t：t归零，a减去t，cnt加上修改次数，j移动到下一位
#include <bits/stdc++.h>
using namespace std;

int n, a[200001], t1[200001];
long long sum;
char c[200001], t2[200001];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%d %c", &a[i], &c[i]);
		sum += a[i];
	}
	int t = 0;
	long long mid = (sum + 1) / 2, b = 0;
	for (int i = 1; i <= n; i++) {
		if ((b + a[i]) < mid) {
			b += a[i];
			t1[i] = a[i];
			t2[i] = c[i];
			t++;
		}
		else if ((b + a[i]) >= mid) {
			t1[i] = mid - b;
			t2[i] = c[i];
			t++;
			break;
		}
	}
	long long cnt = 0;
	for (int i = n, j = 1; j <= t;) {
		if (a[i] < t1[j]) {
			t1[j] -= a[i];
			if (c[i] != t2[j])
				cnt += a[i];
			a[i] = 0;
			i--;
		}
		else if (a[i] == t1[j]) {
			t1[j] = 0;
			if (c[i] != t2[j])
				cnt += a[i];
			a[i] = 0;
			i--, j++;
		}
		else if (a[i] > t1[j]) {
			a[i] -= t1[j];
			if (c[i] != t2[j])
				cnt += t1[j];
			t1[j] = 0;
			j++;
		}
	}
	printf("%lld\n", cnt);
}

