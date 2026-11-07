//台面上任意时刻同色只有一张牌
#include<bits/stdc++.h>

#define N 500010
using namespace std ;

int pos[N] , sta[N] ;    //某种颜色出现的位置最靠后是哪个 sta指向那个位置 
int n , m , a[N] , ans[N] ;

int main() {
	freopen("card.in" , "r" , stdin) ;
	freopen("card.out" , "w" , stdout) ;
	scanf("%d %d" , &n , &m) ;
	for(int i = 1 ; i <= n ; ++i) {
		scanf("%d" , &a[i]) ;
	}
	for(int i = n ; i >= 1 ; --i) {
		//这里必须改成算贡献 才能不T 
		if(pos[a[i]]) {
			sta[i] = sta[pos[a[i]]] ;
		}
		else sta[i] = i+1 , pos[a[i]] = i ;
		for(int j = i ; j <= n ; j = sta[j]) {
			ans[a[j]] ++ ;
		}
	}
	for(int i = 1 ; i <= m ; ++i) {
		printf("%d " , ans[i]) ;
	}
	return 0 ;
} 