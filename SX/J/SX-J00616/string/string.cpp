#include<bits/stdc++.h>
using namespace std;
int n , a[200005] ;
char c[200005] ;
long long total ;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n ;
	int cnt = 0 ;
	for(int i = 1 ; i <= n ; i++){
		cin >> a[i] >> c[i] ;
	}
	for(int i = 1 ; i <= n ; i++){
		if(c[i] != c[i+1]){
			cnt = 1 ;
			break;
		}
	}
	if(cnt == 0){
		cout << 0 ;
		return 0;
	}
	int l = 1 , r = n ;
	while(l < r){
		if(c[l] == c[r]){
			int fps = min(a[l],a[r]) ;
			a[l] -= fps ;
			a[r] -= fps ;
		}else if(c[l] != c[r]){
			int fps = min(a[l],a[r]) ;
			a[l] -= fps ;
			a[r] -= fps ;
			total += fps ;
		}
		if(a[l] == 0){
			l += 1 ;
		}
		if(a[r] == 0){
			r -= 1 ;
		}
	}
	cout << total ;
	return 0;
}