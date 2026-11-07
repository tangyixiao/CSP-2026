#include <bits/stdc++.h>
using namespace std;
int n, m, a[202020], t[202020];
bool b[202020];
void v(int qwer){
	int dsk[202020], top = 0;
	for (int i = qwer; i <= n; i ++){
		int flg = 0;
		for (int j = 1; j <= top; j ++)
			if (dsk[j] == a[i]){
				flg = j;
				break;
			}
		if (flg) top = flg - 1;
		dsk[++ top] = a[i];
	}
	for (int i = 1; i <= top; i ++)
		t[dsk[i]] ++;
}
int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	scanf("%d %d", &n, &m);
	for (int i = 1; i <= n; i ++)
		scanf("%d", &a[i]);
	for (int i = 1; i <= n; i ++)
		v(i);
	for (int i = 1; i <= m; i ++){
		printf("%d", t[i]);
		if (i != m)
			printf(" ");
	}
	return 0;
}
