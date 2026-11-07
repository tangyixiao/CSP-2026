#include<bits/stdc++.h>
using namespace std;
int n , m , cnt[300005] , a[500005] ;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m ;
	for(int i = 1 ; i <= n ; i++){
		cin >> a[i] ;
	}
	if(n == m){
		int map[500005] = {} ;
		for(int i = 1 ; i <= n ; i++){
			map[a[i]] = i ;
		}
		for(int i = 1 ; i <= n ; i++){
			cout << map[i] << " " ;
		}
		return 0;
	}
	for(int i = 1 ; i <= n ; i++){
		int tip = i ;
		while(tip <= n){
			int fps = 0 ;
			cnt[a[tip]]++;
			for(int j = n ; j > tip ; j--){
				if(a[j] == a[tip]){
					tip = j+1 ;
					fps = 1 ;
					break;
				}
			}
			if(fps == 0){
				tip++;
			}
		}
	}
	for(int i = 1 ; i <= m ; i++){
		cout << cnt[i] << " " ;
	}
	return 0;
}