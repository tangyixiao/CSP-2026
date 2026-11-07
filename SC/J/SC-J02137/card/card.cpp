#include <bits/stdc++.h>
using namespace std;
int a[500005];
bool pre[500005];
int cnt[500005];

int main(){ 
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);

	int n,m;
	cin >> n >> m;
	for(int i = 1; i <= n; ++i){
		cin >> a[i];
		cnt[a[i]] += i;
		if(i > 1) pre[i] = (a[i] == a[i - 1]);
	}
	
	for(int i = 1; i <= n; ++i){
		if(pre[i] == true) cnt[pre[i - 1]] -= i - 1;
	}
	
	for(int i = 1; i <= m; ++i)
		cout << cnt[i] << ' ';
	
    return 0;
}