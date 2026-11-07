#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin >> n >> m;
	multiset <int> a;
	multiset <int>::iterator it;
	for(int i = 0;i < n;i++){
		int x;
		cin >> x;
		a.insert(x);
	}
	int ans = *a.begin();
	for(it = a.begin();it != a.end();it++){
		ans &= *it;
	}
	cout << ans;
	return 0;
}
