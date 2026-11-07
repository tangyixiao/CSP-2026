#include<bits/stdc++.h>

using namespace std;
/*
scanf("%d", &x);
printf("%d", x);
*/
const int N = 2e5 + 10, LG = 35;
int n, m;
int a[N];
//int v[LG][N];

int tot[10];
int maxn = 0; 

int ans = 0;
int cnt = 0;
void dfs(int dnl, int xjg, int z){
	if(xjg == 0){
//		for(int i = 1; i <= cnt; i++){
//			cout << t[i] << ' ';
//		}
//		cout << '\n';
//		cout << z;
		ans = max(ans, z);
		
		return;
	}
	
//	cout << z << '\n';
	for(int i = dnl; i <= n - xjg + 1; i++){
//		t[++cnt] = a[i];
		dfs(i + 1, xjg - 1, (z & a[i]));
//		cnt--;
	}
}

//void add(int id, int val){
//	for(int i = 0; i <= 30; i++){
//		if(val & (1 << i)) v[i][id] = 1;
//	}
//}

int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w",stdout);
	
	scanf("%d%d", &n, &m);
	for(int i = 1; i <= n; i++){
		scanf("%d", &a[i]);
		maxn = max(maxn, a[i]);
//		add(i, a[i]);
	}
	
	if(n <= 20){
		dfs(1, m, ((1 << (30)) - 1));
		printf("%d", ans);
	}else{
		if(m == 1){
			sort(a + 1, a + 1 + n, greater<int>());
			printf("%d", a[1]);
		}else if(m == n){
			ans = a[1];
			for(int i = 2; i <= n; i++){
				ans = ans & a[i];
			}
			printf("%d", ans);
		}else if(maxn <= 4){
			for(int i = 1; i <= n; i++){
				tot[a[i]]++;
			}
			for(int v = 4; v >= 0; v--){
				if(v > 2 && tot[v] >= m){
					printf("%d", v);
					break;
				}else if(v == 2 && tot[2] + tot[3] >= m){
					printf("%d", v);
					break;
				}else if(v == 1 && tot[1] + tot[3] >= m){
					printf("%d", v);
					break;
				}else if(v == 0){
					printf("%d", v);
					break;
				}
			}
		}else{
			sort(a + 1, a + 1 + n, greater<int>());
			ans = (1 << (30)) - 1;
			for(int i = 1; i <= m; i++){
				ans = ans & a[i];
//				cout << ans << ' ';
			}
			printf("%d", ans);
		}
	}
	
	fclose(stdin);
	fclose(stdout);
	
	return 0;
}
/*
4 2
3 15 12 12

5 3
31 3 1 15 7

4 2
15 7 3 1

4 3
4 3 2 1 
*/
