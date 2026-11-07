#include <bits/stdc++.h>
using namespace std ;
long long a[210000] ;
char s[210000] ;
int main(){
	freopen("string.in","r",stdin) ;
	freopen("string.out","w",stdout) ;
	int n ;
	cin >> n ;
	for(int i = 1 ; i <= n ; i++){
		cin  >> a[i] ;
		scanf(" %c", &s[i]) ;
	}
	long long ans = 0 ;
	int L = 1 , R = n ;
	while(L+1<R){
		long long t = min(a[L],a[R]) ;
		if(s[L]!=s[R]){
			ans+=t ;
		}
		if(a[L]==a[R]){
			L++ ;
			R-- ;
		}
		else if(a[L]>a[R]){
			R-- ;
			a[L]-=t ;
		}
		else if(a[R]>a[L]){
			L++ ;
			a[R] -= t ;
		}
	}
	if(s[L]!=s[R]){
		ans+=min(a[L],a[R]) ;
	}
	cout << ans << endl ;
	return 0 ;
}
