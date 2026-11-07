#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m,a[200100] = {};
	cin >> n >> m;
	for(int i = 1;i<=n;i++){
		cin >> a[i];
	}
	long long ma = a[1];
	if(m == 1){
		for(int i = 1;i<=n;i++){
			ma = max(a[i],ma);
		}
		cout << ma;
	}
	else if(m==2){
		for(int i = 1;i<n;i++){
			for(int j = 1;j<=n;j++){
				ma = max(ma,(a[i]&a[j]));
			}
			cout << ma;
		}
	}
	else if(m==n){
		for(int i = 2;i<=n;i++){
			ma = (ma&a[i]);
		}
		cout << ma;
	}
	else{
		sort(a+1,a+n+1);
		ma = a[n-m+1];
		for(int i = n-m+2;i<=n;i++){
			ma = (ma&a[i]);
		}
		cout << ma;
	}
	return 0;
}
