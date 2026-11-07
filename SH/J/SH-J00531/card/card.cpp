#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 3;
int a[N];
bool b[3];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n, m;
	cin >> n >> m;
	int ans = 0;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
		memset(b, sizeof(b), 0);
		if(b[i] == 0 && a[i] == 1 || b[i] == 0 && a[i] == 2){
			b[i] = 1;
		}
	}
	for(int i = 1; i <= m; i++){
		cout << 1 << ' ';
	}
	return 0;
}
