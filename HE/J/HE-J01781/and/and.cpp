#include<bits/stdc++.h>
using namespace std;

int n, m, t1, t2, ans;
int a[200010], num1[200010], num2[200010];

bool pos(int x, int p) {
	return x & (1 << (p - 1));
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; i++)
		scanf("%d", &a[i]);
	for (int i = 31; i >= 1; i--) {
		if (t1 == 0) {
			for (int j = 1; j <= n; j++)
				if (pos(a[j], i) == 1)
					num2[++t2] = j;
			if (t2 >= m) {
				t1 = t2;
				memcpy(num1, num2, sizeof(num1));
			}
			t2 = 0;
		} else {
			for (int j = 1; j <= t1; j++)
				if (pos(a[num1[j]], i) == 1)
					num2[++t2] = num1[j];
			if (t2 >= m) {
				t1 = t2;
				memcpy(num1, num2, sizeof(num1));
			}
			t2 = 0;
		}
	}
	if (t1 == 0)
		puts("0\n");
	else {
		ans = a[num1[1]];
		for (int i = 1; i <= t1; i++)
			ans &= a[num1[i]];
		printf("%d\n", ans);
	}
	return 0;
}
/*
             //\\    ///////
            // \\   //
           //  \\  //
          //   \\  \\
         //----\\   \\
        //     \\    \\
       //      \\     \\\\\\\\
*/
