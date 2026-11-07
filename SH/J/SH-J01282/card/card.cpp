#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;
ll n, m;
ll a[500005], cnt[300005];
bool vis[300005];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for ( int i = 0 ; i < n ; i++ ){
		cin >> a[i];
	}
	for ( int i = 0 ; i < n ; i++ ){
		memset(vis,sizeof(vis),0);
		for ( int j = i ; j < n ; j++ ){
			if (vis[a[i]] == false){
				cnt[a[i]]++;
				vis[a[i]] = true;
			}
		}
	}
	for ( int i = 0 ; i < m ; i++ ){
		cout << cnt[i] << " ";
	}
	return 0;
} 
