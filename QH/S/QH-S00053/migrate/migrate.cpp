#include<bits/stdc++.h>
using namespace std;
const long long A = 1000000;
long long a[A];
int main(){
	freopen("migrate.in", "r", stdin);
	freopen("migrate.out", "w", stdout);
	long long c,t;
	cin >> c >> t;
	for(long long i = 1;i <= t; i++){
		long long cnt = 0;
		long long n,d;
		cin >> n,d;
		for(long long  i = 1;i <= n; i++){
			cin >> a[i];
		}
		for(long long i = 1;i <= n; i++){
			for(long long j = i + 1;j <= n;j++){
				if((a[j]-a[i]) > d && (a[j]-a[i]) < (2*d)){
					cnt ++;
				}
			}
		} 
		cout << cnt << endl;
	}
	return 0;
}
