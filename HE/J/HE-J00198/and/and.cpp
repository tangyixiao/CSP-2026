#include <bits/stdc++.h>
using namespace std;

long long n,m;
long long arr[11000005];

int main (){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	cin >> n >> m;
	long long maxn = -1;
	long long tot = 0;
	for (int i = 1; i <= n; ++i){
		cin >> arr[i];
		maxn = max(maxn,arr[i]);
		tot &= arr[i];
	}
	
	long long mand = 0;
	if (m == 1){
		cout << maxn;
		return 0;
	} else if (m == 2){
		for (int i = 1; i <= n; ++i){
			for (int j = i+1; j <= n; ++j){
				long long synb = arr[i] & arr[j];
				mand = max(mand,synb);
			}	
		}
	} else if (m == n){
		cout << tot;
		return 0;
	}
	
	cout << mand;
	
	
	
	return 0;
}
