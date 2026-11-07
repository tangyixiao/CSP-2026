#include<bits/stdc++.h>
using namespace std ;
int n ;
long long a , top ;
char c , s[200005] ;
int check(char s[],long long top){
	long long ans = 0 , l = 0 , r = top-1 ;
	while(l < r){
		if(s[l] != s[r]) ans++ ;
		l++ , r-- ;
	}
	return ans ;
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	cin >> n ;
	for(int i = 1 ; i <= n ; i++){
		cin >> a >> c ;
		for(int j = 1 ; j <= a ; j++){ s[top++] = c ;}
	}
	cout << check(s,top) ;
	
	fclose(stdin) ;
	fclose(stdout);
	return 0 ;
}
