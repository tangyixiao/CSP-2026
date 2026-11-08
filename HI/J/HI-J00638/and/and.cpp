#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int S = 10005;
int n,m,a[S];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i = 0;i < n;i++) cin >> a[i];
	cout << a[n - 1];
	return 0;
}

