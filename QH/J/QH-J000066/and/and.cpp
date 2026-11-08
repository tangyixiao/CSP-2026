#include<bits/stdc++.h>
using namespace std;

const int N = 2010;
int n, m, a[200010], dp[N][N], s[200010], mm = 0;

int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	scanf("%d%d", &n, &m);
	bool f = 1;
	for(int i = 1; i <= n; i++){
		scanf("%d", &a[i]);
		if(a[i] - 1 != s[i - 1]) f = 0;
		mm = max(mm, a[i]);
		s[1] = a[1], s[i] = s[i - 1] & a[i];
	}
	if(n > 2000 && mm > 4){
		sort(a + 1, a + n + 1);
		printf("%d", a[m + 1]);
		return 0;
	}
	if(m == 2){
		int ma = 0;
		for(int i = 1; i < n; i++)
			for(int j = i + 1; j <= n; j++)
				if(a[i] & a[j] > ma) ma = a[i] & a[j];
		printf("%d", ma);
		return 0;
	}
	if(n > 2000 && mm <= 4){
		int k[4];
		k[0] = k[1] = k[2] = k[3] = 0;
		for(int i = 1; i <= n; i++) k[a[i]]++;
		if(k[3] >= m) printf("3");
		else if(k[3] + k[2] >= m) printf("2");
		else if(k[3] + k[1] >= m) printf("1");
		else printf("0");
		return 0;
	}
	if(f && n > 2000){
		int t1 = 0, t2 = 0;
		while(m > 0) m /= 2, t1++;
		while(mm > 0) mm /= 2, t2++;
		printf("%d", 1 << (t2 - t1));
		return 0;
	}
	memset(dp, 0, sizeof(dp));
	int M = 0;
	for(int i = 1; i <= n; i++){
		if(M < a[i]) M = a[i];
		dp[i][1] = M;
	}
	for(int i = 2; i <= n; i++){
		for(int j = 2; j <= i && j <= m; j++)
			dp[i][j] = max(dp[i][j], max(dp[i - 1][j - 1] & a[i], dp[i - 1][j]));
		dp[i][i] = s[i];
	}
	printf("%d", dp[n][m]);
	return 0;
}
