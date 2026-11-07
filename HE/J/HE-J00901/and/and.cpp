#include<bits/stdc++.h>
using namespace std ;
int n , m , a[2005] , maxn = 0 , s[2005] ;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	cin >> n >> m ;
	for(int i = 1 ; i <= n ; i++){
		cin >> a[i] ;
		if(maxn < a[i]) maxn = a[i] ;
	}
	if(m == 1){cout << maxn ;}
	else if(m == 2){
		for(int i = 1 ; i <= n ; i++){
			for(int j = 1 ; j <= n ; j++){
				if(i == j) continue ;
				if(maxn < a[i]&a[j]) maxn = a[i]|a[j] ;
		}
		}
		cout << maxn ;
	}
	else if(m == 2){
		for(int i = 1 ; i <= n ; i++){
			s[i] = s[i-1] & a[i] ;	
		}
		cout << s[n] ;
	}
	else{
		cout << maxn ;
	}
	
	fclose(stdin) ;
	fclose(stdout);
	return 0 ;
}
