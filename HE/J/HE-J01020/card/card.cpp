#include <bits/stdc++.h> 
#define LL long long 
using namespace std;
const int N = 2e5+10;
int n , m;
int a[N] , cnt[N];

signed main(){
	freopen("card.in" , "r" , stdin);
	freopen("card.out" , "w" , stdout);
	cin >> n >> m;
	for(int i = 1 ; i <= n ; i++){
		cin >> a[i];
		cnt[a[i]] += i;
	}
	for(int i = 1 ; i < n ; i++){
		for(int j = i ; j <= n ; j++){
			int l = j;
			for(int k = j-1 ; k >= i ; k--){
				if(a[j] == a[k]){
					l = k;
					while(l < j){
						cnt[a[l]]--;
						l++;
					} 
				} 
			}
		}
	} 
	for(int i = 1 ; i <= m ; i++) cout << cnt[a[i]] << " ";
	
	return 0;
}  
