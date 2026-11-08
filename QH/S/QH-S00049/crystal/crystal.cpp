#include<bits/stdc++.h>
using namespace std;


int main(){
freopen("crystal.in", "r", stdin);
freopen("crystal.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	vector<long long> a(n);
	for(long long i = 0; i < n; i++){
		cin >> a[i];
	} 
	for(long long i = 0; i < n - 1; i++){
		for(long long j = 0; j < n - 1 - i; j++){
			if(a[j] > a[j + 1]){
				swap(a[j], a[j + 1]);
			}
		}
	}
	long long ans = 1;
	for(long long i = 0; m > 0; m--){
		if(a[i] < a[i + 1]){
			a[i] += 1;
		}
		else{
			i++;
			ans++;
		}
	}
	cout << ans;
	return 0;
}
