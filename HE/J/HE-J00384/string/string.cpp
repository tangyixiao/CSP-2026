#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 2e5 + 5;
char c[N];
int l,r,n,a[N];
ll ans;
int main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(int i = 1;i <= n;i ++)cin >> a[i] >> c[i];
	l = 1,r = n;
	while(l < r){
		if(c[l] != c[r])ans += min(a[l],a[r]);
		if(a[l] < a[r])a[r] -= a[l],a[l] = 0;
		else a[l] -= a[r],a[r] = 0;
		while(!a[l] && l <= n)l ++;
		while(!a[r] && r >= 1)r --;
	}
	cout << ans;
	return 0;
}
