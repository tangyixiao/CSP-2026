#include<bits/stdc++.h>
using namespace std;
int n , m;
int a[500010];
int cnt[300010];
map<int , int> mp;
int main(){
	freopen("card.in" , "r" , stdin);
	freopen("card.out" , "w" , stdout);
	cin >> n >> m;
	for(int i = 1 ; i <= n ; i++)cin >> a[i];
	for(int i = n ; i >= 1 ; i--){
		if(!mp.count(a[i]))mp[a[i]] = i;
	}
	for(int i = 1 ; i <= n ; i++){
		int x = i;
		while(x < n){
			cnt[a[x]]++;
			if(mp[x] > x)x = mp[x] + 1;
			else if(mp[x] == x)x++;
		}
	}
	for(int i = 1 ; i <= m ; i++)cout << cnt[i] << " ";
	return 0;
}
