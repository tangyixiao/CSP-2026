#include <bits/stdc++.h> 
#define int long long 
using namespace std;
const int N = 2e5+10;
int n , m;
int a[N];
int ans , qwq;
inline bool cmp(int x , int y){return x > y;}

inline void dfs(int cnt , int sum , int id){
	if(id > n) return;
	if(cnt == m){
		qwq = max(qwq , sum);
		return;
	}
	
	if(cnt == 1) dfs(cnt , a[id] , id+1);
	dfs(cnt+1 , (sum & a[id]) , id+1);
	dfs(cnt , sum , id+1); 
}
signed main(){
	freopen("and.in" , "r" , stdin);
	freopen("and.out" , "w" , stdout);
	cin >> n >> m;
	for(int i = 1 ; i <= n ; i++) cin >> a[i];
	sort(a+1 , a+n+1 , cmp); 
	if(m == 1){
		cout << a[m];
		return 0;
	}
	if(m == n){
		qwq = a[1];
		for(int i = 2 ; i <= n ; i++) qwq &= a[i];
		cout << qwq;
		return 0; 	
	}
	if(m == 2){
		qwq = -0x3f3f3f3f; 
		for(int i = 1 ; i <= n ; i++){
			for(int j = i+1 ; j <= n ; j++){
				qwq = max(qwq , (a[i] & a[j]));
			}
		}
		cout << qwq;
		return 0;
	}	
	qwq = -0x7f7f7f7f;
	dfs(1 , 0 , 1);
	cout << qwq;	
	
	return 0;
} 
