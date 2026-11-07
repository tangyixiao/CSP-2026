#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin >> n >> m;
	long long a[n+1];
	for(int i = 0;i <= n;i++){
		cin >> a[i];
	}
	int cnt = 0;
	for(int i = 0;i <= m;i++){
		cnt++;
	}
	cout << n << m << cnt;
}
