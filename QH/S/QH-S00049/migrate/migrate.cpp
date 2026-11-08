#include<bits/stdc++.h>
using namespace std;

int main(){
freopen("migrate.in", "r", stdin);
freopen("migrate.out", "w", stdout);
	long long c, t;
	cin >> c >> t;
	long long n, d;
	while(t--) {
		vector<long long> a(n);
		cin >> n >> d;
		for(long long i = 0; i < n; i++){
			cin >> a[i];
		}
		vector<long long> juli(n - 1);
		for(long long i = 0; i < n - 1; i++){
			juli.push_back(a[i + 1] - a[i]);
		}
		long long ans = 0;
		vector<long long> keizo(n);
		for(long long i = 0; i < juli.size(); i++){
			if(juli[i] <= d){
				keizo.push_back(juli[i]);
			} 
		}
		for(long long i = 0; i < keizo.size() - 3; i++){
			if(keizo[i] + keizo[i + 1] == keizo[i + 1] + keizo[i + 2]) {
				ans++;
			}
		}
		cout << ans;
	}
return 0;
}
