#include<bits/stdc++.h>
using namespace std;
const int maxn = 1e5 + 10;
int a[maxn], tong[maxn], tong1[maxn];
int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m, cnt;
	cin >> n >> m;
	for(int i = 1; i <= n; i++)	cin >> a[i];
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++) tong[j] = 0;
		for(int j = i; j <= n; j++){
			if(tong[a[j]] > 0){
				for(int k = tong[a[j]]; k <= j; k++) tong[a[k]] = 0;
				tong[a[j]] = j;
			}else tong[a[j]] = j;
		}
		for(int j = 1; j <= m; j++){
			if(tong[j] > 0) tong1[j]++;
		}
	}
	for(int i = 1; i <= m; i++) cout << tong1[i] << " ";
	fclose(stdin);
	fclose(stdout);
	return 0;
}