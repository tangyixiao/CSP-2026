#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;
ll n, m, MAX;
ll a[200005];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for ( int i = 0 ; i < n ; i++ ){
		cin >> a[i];
		MAX = max(MAX,a[i]);
	}
	if (m == 1 || m > 3){
		cout << MAX;
		return 0;
	}
	MAX = 0;
	if (m == 2){
		for ( int i = 0 ; i < n ; i++ ){
			for ( int j = i + 1 ; j < n ; j++ ){
				MAX = max(MAX,(a[i] & a[j]));
			}
		}
		cout << MAX;
	}else if (m == 3){
		for ( int i = 0 ; i < n ; i++ ){
			for ( int j = i + 1 ; j < n ; j++ ){
				for ( int k = j + 1 ; k < n ; k++ ){
					MAX = max(MAX,(a[i] & a[j] & a[k]));
				}
			}
		}
		cout << MAX;
	}
	return 0;
} 
