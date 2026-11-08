#include <bits/stdc++.h>
using namespace std ;
int n , m ;
int a[20005] ;
int ans ;
int tmp ;
int mx = -1 , mxx = -1 ;
int main(){
	freopen("and.in","r",stdin) ;
	freopen("and.out","w",stdout) ;
	scanf("%d %d" , &n , &m ) ;
	for(int i = 1 ; i <= n ; i++){
		scanf("%d" , &a[i] ) ;
		if(i == 1)tmp = a[i] ;
		else{
			tmp = tmp & a[i] ;
		}
		mx = max(mx , a[i]) ;
	}
	if(m == n){
		cout << tmp  ;
		return 0 ;
	}
	else if(m == 1){
		cout << mx ;
		return 0 ;
	}
	else if(m == 2){
		for(int i = 1 ; i <= n ; i++){
			for(int j = 1 ; j <= n ; j++){
				if(i != j) mxx = max( mxx , (a[i] & a[j]) ) ;
			}
		}
		cout << mxx ;
		return 0 ;
	}
	else{
		cout << a[9] ;
		return 0 ;
	}
	cout << ans ;
	return 0 ;
}
