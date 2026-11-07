#include <bits/stdc++.h>
using namespace std;
int maxn , n , m , a[200005] , maxn1;
int main()
{

	cin >> n >> m;
	for(int i = 1 ; i <= n ; i++) cin >> a[i];
	if(m == 1){//样例6
		for(int j = 1 ; j <= n ; j++) maxn = max(maxn , a[j]);
	}
	else if(m == n){//7
		for(int i = 2 ; i <= n ; i++){
			if(i == 2) maxn = int(a[2]&a[1]);
			else maxn = int(a[i]&maxn);
		}
	}
	else if(m == 2){//8-10
		for(int i = 1 ; i <= n ; i++){
			for(int j = 1 ; j <= n ; j++){
				if(maxn = 0){
					maxn = int(a[i]&a[j]);
				}
				else maxn = max(maxn , int(a[i]&a[j]));
			}
		}
	}
	else if(m == 3){//8-10
		for(int i = 1 ; i <= n ; i++){
			for(int j = 1 ; j <= n ; j++){
				if(maxn1 = 0){
					maxn1 = int(a[i]&a[j]);
				}
				else maxn1 = max(maxn , int(a[i]&a[j]));
				for(int k = 1 ; k <= n ; k++){
					if(maxn = 0){
						maxn = int(a[k]&maxn1);
					}
					else maxn = max(maxn , int(a[k]&maxn1));
				}
					
			}
		}
	}
	cout << maxn;
	return 0;
}