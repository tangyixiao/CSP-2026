#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	int a[200086];
	for(int i = 0; i < n; i++){
		cin >> a[i]; 
	}
	sort(a,a+n);
    if(m == 1){
    	cout << a[n - 1];
		return 0;
	} else if (m == 2){
		int sum = 0;
		for(int i = 0; i < n; i++){
			for(int j = i+1; j < n; j++){
				sum = max(sum , a[i]&a[j]);
			}
		}
		cout << sum;
		return 0;
	} else if (m == n){
		int sum = a[0];
		for(int i = 1; i < n; i++){
			sum &= a[i];
		}
		cout << sum;
		return 0;
	} else if(m == n - 1){
		int unm = 0;
		for(int i = 0; i < n ; i++){
			int sum;
			if(i == 0){
				sum = a[1];
		        for(int j = 2; j < n; j++){
		        	sum &= a[j];
	        	}
			}else{
				sum = a[0];
		        for(int j = 1; j < n; j++){
		        	if(j == i){
		        		continue;
					}else{
		    	        sum &= a[j];
					}
	    	    }
			}
			unm = max(sum,unm);
		}
		cout << unm;
	}else{
		int bb3smc = a[n-1];
        for(int i = 2; i <= m;i++){
    	    bb3smc &= a[n-i];
	    }
	    	cout << bb3smc;
	}

	return 0;
}
