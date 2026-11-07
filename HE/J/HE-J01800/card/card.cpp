#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout)
	int a[100005],n,m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++){
		cin >> a[i];
	}
	int x = a[1],cnt = 0;
	for (int i = 2; i <= m; i++){
		if(x == a[i]){
			for (int j = x; j <= i-1; j++){
				a[j] = 0;
			}
			a[x] = a[i];
			i = x;
			cnt++;
		}
	}
	cout << cnt << endl;
	return 0;
}
