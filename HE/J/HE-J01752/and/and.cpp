#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
int a[N];

int main() {
	
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	
	int n, m;
	cin >> n >> m;
	
	cin >> a[1];
	int ans;
	if(m == 1){
		ans = a[1];
	}else {
		ans = INT_MIN;
	}
	for(int i = 2; i <= n; i++){
		cin >> a[i];
		if(m == 1){
			if(a[i] > ans){
				ans = a[i];
			}		
		}else if(m == 2){
			for(int j = 1; j < i; j++){
				if((a[i] & a[j]) > ans){
					ans = a[i] & a[j];
				}
			}
		}
	}
	
	cout << ans;
	
	return 0;
}
