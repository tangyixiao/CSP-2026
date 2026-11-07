#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);

	long long n, m;
	cin >> n >> m;

	long long list[n];
	for(long long i = 0;i < n;i++){
		cin >> list[i];
	}

	long long cnt[m];
	fill(cnt, cnt + m, 0);
	for(long long i = 0;i < m;i++){
		long long tmp[m];
		for(long long j = 0;j < m;j++){
			tmp[j] = list[j];
		}

		for(long long j = i;j < n;j++){
			for(long long k = i - 1;k < j;k++){
				if(tmp[k] == 0){
					continue;
				}
				if(tmp[k] == tmp[j]){
					fill(tmp + k, tmp + j, 0);
				}
			}
		}

		for(long long j = i;j < n;j++){
			for(long long k = i - 1;k < j;k++){
				if(tmp[k] == 0){
					continue;
				}
				if(tmp[k] == tmp[j]){
					tmp[k] = 0;
				}
			}
		}

		for(long long j = i;j < n;j++){
			if(tmp[j] == 0){
				continue;
			}
			cnt[tmp[j]]++;
		}
	}

	for(long long i = 0;i < n;i++){
		cout << cnt[i] << " ";
	}

	return 0;
}