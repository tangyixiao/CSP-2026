#include<bits/stdc++.h> 
using namespace std;
const int N = 2e5+5;
int n , m , a[N];
int ans = -1;
int main(){
	
	freopen("and.in" , "r" , stdin);
	freopen("and.out" , "w" , stdout);
	
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	sort(a + 1 , a + n + 1 , greater<int>());
	if(m == 1){
		cout << a[1];
	}else if(m == 2){
		for(int i = 1; i <= n; i++){
			for(int j = i; j <= n; j++){
				ans = max(ans , a[i] & a[j]);
			}
		}
		cout << ans;
	}else if(m == n){
		for(int i = 1; i <= n; i++){
			ans = ans & a[i];
		}
		cout << ans;
	}
	
	
	return 0;
}
