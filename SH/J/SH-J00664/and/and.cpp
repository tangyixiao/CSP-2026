#include <bits/stdc++.h>
using namespace std;
int n,m;
int a[200005];
bool cmp(int c,int b){
	return c > b;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i = 1;i <= n;i++){
		cin >> a[i];
	}
	sort(a+1,a+n+1,cmp);
	if(m == 1){
		cout << a[1];
		return 0;
	}
	if(m == 2){
		cout << (a[1] & a[2]);
		return 0;
	}
	long long ans = a[1]&a[2];
	for(int i = 3;i <= m;i++){
		ans = ans&a[i];
	}
	cout << ans;
	return 0;
}
