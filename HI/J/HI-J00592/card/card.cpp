#include <bits/stdc++.h>
using namespace std;
const int N = 3e5+10;
long long n,m,a[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for(int i = 1;i <= n;i++){
		cin >> a[i];
	}
	for(int i = 0;i < m;i++){
		cout << i+1 << " ";
	}
	return 0;
}
