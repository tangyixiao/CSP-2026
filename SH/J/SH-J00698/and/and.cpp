#include<bits/stdc++.h>
using namespace std;
const int N = 2e5+10;
long long n,m;
long long a[N];
bool cmp(long long a,long long b){
	if(__builtin_popcount(a) != __builtin_popcount(b))return __builtin_popcount(a) > __builtin_popcount(b);
	else return a>b;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i = 1;i <= n;i++){
		cin >> a[i];
	}
	sort(a + 1,a + n + 1,cmp);
	long long ans = a[1];
	for(int i = 2;i <= m;i++){
		ans &= a[i];
	}
	cout << ans;
	return 0;
}
