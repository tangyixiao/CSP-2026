#include <bits/stdc++.h>
using namespace std;
int n , m ;
int a[500005] ;
int cnt[300005] ;
int mp[500005] ;
int nin , in ;

int main(){
	freopen("card.in","r",stdin) ;
	freopen("card.out","w",stdout) ;
	scanf("%d %d" , &n , &m) ;
	for(int i = 1 ; i <= n ; i++){
		scanf("%d" , &a[i]) ;
	}
	for(int i = 1 ; i <= n ; i++){
		for(int j = 1 ; j <= m ; j++) mp[j] = 0 ;
		for(int j = i ; j <= n ; j++){
			cnt[a[j]]++ ;
			in = j ;
			if(mp[a[j]] == 0) mp[a[j]] = j ;
			else{
				nin = mp[a[j]] ;
				while(in - nin){
					mp[a[in]] = 0;
					cnt[a[in]]--;
					in-- ;
				}
				mp[a[j]] = j ;
			}
			
		}
	} 
	for(int i = 1 ; i <= m ; i++){
		cout << cnt[i] << ' ' ;
	}
	return 0 ;
}
