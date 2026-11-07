#include <bits/stdc++.h>
const int N = 1e6;
using namespace std;
int n,m;
long long b[N];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i = 1;i <= n;i++){
		cin >> b[i];
	}
	long long mx = -1;
	for(int i = 1;i <= n;i++){
		for(int j = i+1;j <= n;j++){
			mx = max(mx,b[i] & b[j]);
			
		}
	}
	cout << mx;
	return 0;
}
