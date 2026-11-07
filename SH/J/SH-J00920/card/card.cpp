#include <bits/stdc++.h>
using namespace std;

int n,m;
int a[500050],cnt[300050],cf[300050];
int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++){
		for (int j = i; j <= n; j++){
			if (cf[a[j]] == 0){
				cf[a[j]] = j;
			}
			else{
				for (int k = cf[a[j]]; k < j; k++){
					cf[a[k]] = 0;
				}
				cf[a[j]] = j;
			}
		}
		for (int j = 1; j <= m; j++){
			if(cf[j] > 0){
				cnt[j] ++;
				cf[j] = 0;
			}
		}
	}
	for (int i = 1; i <= m; i++){
		cout << cnt[i] << " ";
	}
	return 0;
}
