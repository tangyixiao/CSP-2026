#include <bits/stdc++.h>
using namespace std;
long long n,m,maxn = -1;
long long a[200010];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	cin >> n >> m;
	for(long long i = 0; i < n;i++)   cin >> a[i];
	if(m == 1){
		for(long long i = 0; i < n;i++)    maxn = max(maxn,a[i]);
		cout << maxn;
		return 0;
	}
	
	if(m == n){
		maxn = a[0];
		for(long long i = 1; i < n;i++)    maxn = maxn & a[i];
		cout << maxn;
		return 0;
	}
	if(m == 2){
		for(long long i = 0; i < n ;i++){
			for(long long j = 0; j < n && j != i;j++)  maxn = max(maxn,a[i] & a[j]);
		}
		cout << maxn;
		return 0;
	}
	if(m == n-1){
		for(long long i = 0; i < n ;i++){
			long long maxnn = -1;
			for(long long j = 0; j < n && j != i;j++){
				if(maxnn == -1)   maxnn = a[j];
				else              maxnn = maxnn & a[j];
			}
			maxn = max(maxn,maxnn);
		}
		cout << maxn;
		return 0;
	}
	
	if(n <= 20){
		if(m == 3){
			for(long long i = 0; i < n ;i++){
				for(long long j = 0; j < n && j != i;j++){
					for(long long k = 0; k < n && k != i && k != j;k++)     maxn = max(maxn,a[i] & a[j] & a[k]);
				}
			}
			cout << maxn;
			return 0;
		}
		if(m == 4){
			for(long long i = 0; i < n ;i++){
				for(long long j = 0; j < n && j != i;j++){
					for(long long k = 0; k < n && k != i && k != j;k++) {
						for(long long z = 0; z < n && z != i && z != j && z != k;z++)   maxn = max(maxn,a[i] & a[j] & a[k] & a[z]);
					}    
				}
			}
			cout << maxn;
			return 0;
		}
		
		if(m == 5){
			for(long long i = 0; i < n ;i++){
				for(long long j = 0; j < n && j != i;j++){
					for(long long k = 0; k < n && k != i && k != j;k++) {
						for(long long z = 0; z < n && z != i && z != j && z != k;z++){
							for(long long x = 0; x < n && x != i && x != j && x != k && x != z;x++)  maxn = max(maxn,a[i] & a[j] & a[k] & a[z] & a[x]);
						}   
					}    
				}
			}
			cout << maxn;
			return 0;
		}
		
		if(m == 6){
			for(long long i = 0; i < n ;i++){
				for(long long j = 0; j < n && j != i;j++){
					for(long long k = 0; k < n && k != i && k != j;k++) {
						for(long long z = 0; z < n && z != i && z != j && z != k;z++){
							for(long long x = 0; x < n && x != i && x != j && x != k && x != z;x++){
								for(long long v = 0; v < n && v != i && v != j && v != k && v != z && v != x;v++)  maxn = max(maxn,a[i] & a[j] & a[k] & a[z] & a[x] & a[v]);
							}
						}   
					}    
				}
			}
			cout << maxn;
			return 0;
		}
	}
	
	else{
		sort(a,a+n);
		long long cnt = 1;
		for(long long i = 1; i <= n ;i++){
			if(i == n){
				if(cnt >= m)   maxn = max(maxn, a[i-1]);
				break;
			}
			if(a[i] == a[i-1])   cnt++;
			else{
				if(cnt >= m)   maxn = max(maxn, a[i-1]);
				cnt = 1;
			}
		}
		if(maxn == -1)   cout << 0;
		else             cout << maxn;
	}
	return 0;
}