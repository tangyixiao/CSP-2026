#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0);
	int n;cin >> n;
	vector<int> a(n+1);
	vector<vector<ll>> f(n+1,vector<ll>(n+1));
	vector<char> c(n+1);
	for(int i = 1; i <= n; i++)
		cin >> a[i] >> c[i];
	for(int len = 2; len <= n; len++){
		for(int i = 1; i+len-1 <= n; i++){
			int j = i+len-1;
			if(a[i] == a[j]){
				if(c[i] == c[j])f[i][j] = f[i+1][j-1];
				else{
					f[i][j] = f[i+1][j-1] + a[i];
				}
			}else{
				if(c[i] == c[j])f[i][j] = f[i+1][j-1] + abs(a[i]-a[j]);
				else{
					f[i][j] = f[i+1][j-1] + max(a[i],a[j]);
				}
			}
		}
	}
	cout << f[1][n];
	return 0;
}