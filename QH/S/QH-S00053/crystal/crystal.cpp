#include<bits/stdc++.h>
using namespace std;
long long a[1000000];
int main(){
	freopen("crystal.in", "r", stdin);
	freopen("crystal.out", "w", stdout);
	unsigned long long cnt = 0;
	long long n;
	unsigned long long m; 
	cin >> n >> m;
	for(long long i = 1;i <= n;i++){
		cin >> a[i];
	}
	long long g = (n/2)+(n%2);
	for(unsigned long long i = 1;i <= m;i++){
		if((g-i)>=1 && (m-a[g-i])>=0){
			m -= a[g-i];
			a[g-i] = a[g];
		}
	}
	for(long long i = 1;i <= n;i++){
		if(a[i] == a[i+1]) cnt++;
	}
	cout << cnt + 1;
	return 0;
}
