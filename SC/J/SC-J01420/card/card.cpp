#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	long long n, m, a[10005];
	cin >> n >> m;
	long long t[10005] = {0};
	for(long long i = 1; i <= n; i++){
		cin >> a[i];
		t[a[i]] += i;
	}
	for(long long i = 1; i <= n; i++){
		for(long long j = i + 1; j <= n; j++){
			for(long long k = i; k < j; k++){
				if(a[j] == a[k]){
					for(long long l = k + 1; l <= j; l++){
						t[a[l]]--;
					}
				}
			}
		}
	}
	for(long long i = 1; i <= m; i++){
		cout << t[i] << ' ';
	}
	return 0;
}