#include <bits/stdc++.h>
using namespace std ;
long long a[510000] ;
long long s[510000]={ } ;
long long t[510000]={ } ;
long long f[510000] ;
long long k[510000] ={ } ;
int main(){
	freopen("card.in","r",stdin) ;
	freopen("card.out","w",stdout) ;
	int n , m ;
	cin >> n >> m ;
	for(int i = 1 ; i <= n ; i++){
		cin >> a[i] ;
		s[i] = a[i] ;
		t[a[i]] = i ;
	}	
	for(int i = 1; i <= n ; i++){
		memset(f,0,sizeof(f)) ;
		for(int j = i ; j <= n ; j++){
			k[a[j]]++ ;
			j = max((int)t[a[j]],j) ;
		}
	}	
	for(int i = 1 ; i <= m ; i++){
		cout << k[i] << " " ; 
	}
	
	return 0 ;
}
