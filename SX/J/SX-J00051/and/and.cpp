#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,x;
	cin >> n >> m;
	vector<int> a(n);
	for(int i = 0; i < n; i++) cin >> a[i];
	sort(a.begin(),a.end());
	x = a[a.size()-1];
	for(int i = n-1; i > n-m-1; i--){
		x&=a[i];
	}
	cout << x;
    return 0;
}