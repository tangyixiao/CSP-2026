#include<bits/stdc++.h>
using namespace std;

const int MAXN = 2e5 + 5;

int a[MAXN];
int ans = -1;
int vis;

int main(){
	freopen("and.in" , "r" , stdin);
	freopen("and.out" , "w" , stdout); 
	int n , m;
	cin >> n >> m;
	for(int i = 1 ; i <= n ; i++)	cin >> a[i];
	if(m == 1){
		sort(a + 1 , a + n + 1);
		cout << a[n];
	}
	else if(m == 2){
		for(int i = 1; i <= n ; i++)
			for(int j = i + 1 ; j <= n ; j++)
				ans = max(ans , a[i] & a[j]);
				cout << ans;
	}
	else if(m == n){
		ans = a[1] & a[2];
		for(int i = 3 ; i <= n ; i++)
			ans = ans & a[i];
			cout << ans;
	}
	else if(m == n - 1){
		for(int i = 1 ; i <= n ; i++){
			int cnt = a[1] & a[2];
			int b = a[i];
			a[i] = int(pow(2 , 20) - 1);
		for(int i = 3 ; i <= n ; i++)
			cnt = cnt & a[i];
			ans = max(cnt , ans);
		}
		cout << ans;
	}
	else{
		sort(a + 1 , a + n + 1);
		ans = a[n];
		for(int i = 1 ; i <= n ; i++){
			if(a[i] == pow(2 , i) - 1)
			vis++;
			if(vis == n)
			for(int i = n - 1; i >= n - m + 1; i--)
				ans = ans & a[i];
		}
		cout << ans; 
	}
}
