#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 10;
long long n,a[N];
char c[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin >> n;
	for(int i = 1;i <= n;i ++){
		cin >> a[i] >> c[i];
	}
	long long l = 1,r = n,ans = 0;
	while(l < r){
		int sum = min(a[l],a[r]);
		if(c[l] != c[r]){
			ans += sum;
		}
		a[l] -= sum;
		a[r] -= sum;
		if(a[l] == 0){
			l ++;
		}
		if(a[r] == 0){
			r --;
		}
	}
	cout << ans;
	return 0;
}
