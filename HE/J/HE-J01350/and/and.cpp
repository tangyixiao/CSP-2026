#include<bits/stdc++.h>
using namespace std;
const int N = 2 * 1e5;
int a[N];
int main(){
	
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	
	int n, m;
	cin >> n >> m;
	
	for(int i = 1; i <= n; i++){
	    cin >> a[i];	
	}
	
	if(m == 1){
		int ma = INT_MIN;
	    for(int i = 1; i <= n; i++){
	    	ma = max(ma, a[i]);
		} 
		cout << ma;    	
	}else if(m == n){
		int sum = a[1];
		for(int i = 2; i <= n; i++){
	    	sum = sum & a[i];
		} 
		cout << sum;
	}else if(m == 2){
		int ma = INT_MIN;
	    for(int i = 1; i <= n; i++){
	    	for(int j = i + 1; j <= n; j++){
	    		ma = max(ma, a[i] & a[j]);
			} 
		}
		cout << ma;
	} 
    return 0;
}
