#include<bits/stdc++.h>
using namespace std;
int sum =0;

int a[2000000];
int main(){
	freopen("and.in" , "r" , stdin);
	freopen("and.out" , "w" , stdout); 
	int n,m;
	cin >> n >> m;
	int maxxx = INT_MIN;
	for(int i = 1; i <= n; i ++){
		cin >> a[i];
		maxxx = max(maxxx , a[i]); 
	}
	if(m == 1){
		cout << maxxx;
		return 0;
	}	
	if(m == 2){
		int sum = 0;
		for(int i = 1; i < n; i ++){
			for(int j = i+1; j <=n; j ++){
				sum = max(sum , i&j);
			}
		}
		cout<< sum;
		return 0;
	} 
	if( m == n){
		int sum = a[1];
		for(int i = 2; i <= n; i ++){
			sum = sum&a[i];
		}
		cout << sum; 
		return 0;
	}
	if( m == n-1){
		int sum = 0;
		int ans = 0;
		for(int j = 1; j <= n; j ++){
			for(int i = 1; i <= n; i ++){
				if( i == j ) continue;
				if(sum== 0){
					sum = a[i];
					continue;
				}
				sum = sum & a[i];
			}
			ans = max(ans,sum);
		}
		cout << ans; 
	}
	
}
