#include<bits/stdc++.h>
using namespace std;
int a[200009];
//bool vis[200009] ;int b[200009];
//int ans = -1e9;
int n , m;
/*void solve(int k , int i){
	if(m == k+1){
		ans &= a[i];
	//	cout << ans << " ";
		return ;
	}
	if(vis[i] == true) solve(k , i + 1);
	ans &= a[i];
	vis[i] == true;
	solve(k + 1 , i + 1);
	b[i] = ans;
}*/
int main(){
	freopen("and.in" , "r" , stdin);
	freopen("and.out" , "w" , stdout);
	cin >> n >> m;
	for(int i = 0 ; i < n ; i++){
		cin >> a[i];
	}
	//solve(1 , 0);
	int cnt = 0;
	if(m = 1){
		for(int i = 0 ; i < n ; i++)
		{
			cnt = max(cnt , a[i]);
		}
		cout << cnt;
	}
	if(m = 2){
		for(int i = 0 ; i < n ; i++){
			for(int j = i ; j < n ; j++){
				cnt = max(cnt , a[i] & a[j]);
			}
		}
		cout << cnt;
	}
}
