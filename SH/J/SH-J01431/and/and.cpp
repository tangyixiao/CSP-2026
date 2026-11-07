#include <bits/stdc++.h>
using namespace std;
int n, m, d, a[202020];
bool b[202020];
void doelse(){
	int q;
	for (int i = 1; i <= m; i ++){
		q = 0;
		for (int j = 1; j <= n; j ++)
			if ((!b[j]) && (d & a[j] > d & a[q]))
				q = j;
		b[q] = 1, d &= a[q];
	}
}
int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; i ++)
		scanf("%d", &a[i]);
	if (m == 1){
		for (int i = 1; i <= n; i ++)
			d = max(d, a[i]);
	}
	else if (m == 2){
		for (int i = 1; i <= n; i ++)
			for (int j = 1; j <= n; j ++)
				if (i != j)
					d = max(d, a[i] & a[j]);
	}
	else if (m == 3){
		for (int i = 1; i <= n; i ++)
			for (int j = 1; j <= n; j ++)
				for (int k = 1; k <= n; k ++)
					if (i != j && j != k && i != k)
					d = max(d, a[i] & a[j] & a[k]);
	}
	else{
		doelse();
	}
	printf("%d", d);
	return 0;
}
