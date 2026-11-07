#include<bits/stdc++.h>
using namespace std;
long long a[2000005];
bool f(int h,int k){
	return h > k;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,b;
	cin >> n >> m;
	for (int i = 1;i <= n;i++){
		cin >> a[i];
	}
	sort(a+1,a+n+1,f);
	b = a[1];
	for (int i = 1;i <= m;i++){
		b = b & a[i];
	}
	cout << b;
	return 0;
}