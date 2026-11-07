#include <bits/stdc++.h>
using namespace std;
int a[99999999];
int mx[999999999];

int main(){
	freopen("and.in" , "r" , stdin);
	freopen("and.out" , "w" , stdout);
	int n , m , mx = -1e9 , mn = 1e9;
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	for(int i = 1; i <= n; i ++){
		cin >> mx[i];
	}
	while(m--){
		for(int i = 1; i <= n; i++){
			if(mx[i] < max(a[i] , a[i + 1])){
				max(a[i] , a[i + 1]);
			}
		}
	}
	for(int i = 1; i <= n; i++){
		if(mn > mn(a[i] , a[i - 1])){
			mn = mn(a[i] , a[i - 1]);
		}
	}
	cout << mn;
}