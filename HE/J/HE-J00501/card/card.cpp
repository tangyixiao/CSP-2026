#include <bits/stdc++.h>
using namespace std;
int n, m, sum, cnt, a[500005];
int main()
{
    freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
    for(int i = 1; i <= n; i++) cin >> a[i];
    for(int i = 1; i <= n; i++){
    	bool flag = false;
    	for(int  j = i; j <= n; j++){
    		sum += a[j];
    		if(sum >= m){cout << sum << " "; sum = 0; flag = true;}
		}
		if(!flag) cout << a[i] << " ";
	}
    return 0;
}

