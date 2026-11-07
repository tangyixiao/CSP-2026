#include<bits/stdc++.h>
using namespace std;
long long n, m, a[500005], b[500005], ct[300005], nn;
int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	nn = n;
	long long ii = 1;
	while(nn--){
		long long cnt = 1;
		for(int i = ii; i <= n; i++){
			bool flag = 0;
			for(int j = 1; j <= i - ii; j++){
				if(b[j] == a[i]){
					for(int k = j + 1; k <= cnt; k++){
						b[k] = 0;
					}
					cnt = j + 1;
					flag = 1;
					break;
				}
			}
			if(!flag){
				b[cnt] = a[i];
				cnt++;
			}
		}
		for(int i = 1; i < cnt; i++){
			for(int j = 1; j <= m; j++){
				if(b[i] == j){
					ct[j]++;
				}
			}
		} 
		ii++;
	}
	for(int i = 1; i <= m; i++){
		cout << ct[i] << ' ';
	}
	return 0;
}
