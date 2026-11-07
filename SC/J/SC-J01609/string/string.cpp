#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 2e5+5;
ll a1[N], a2[N];
char c1[N], c2[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin >> n;
	for(int i=1; i<=n; ++i){
		cin >> a1[i] >> c1[i];
		a2[n-i+1]=a1[i];
		c2[n-i+1]=c1[i];
		a1[i] += a1[i-1];
	}
	for(int i=1;i<=n; ++i)a2[i] += a2[i-1];
	ll l1=1, l2 = 1;
	int b1=1, b2=1;
	ll ans=0;
	while(b1<=n && b2 <=n){
		ll len1 = a1[b1]- l1 + 1;
		ll len2 = a2[b2]- l2 + 1;
		if(len1 < len2){
			if(c1[b1]!= c2[b2])ans += len1;
			l1 = a1[b1]+1;
			b1++;
			l2 = l1;
		}
		else if(len1 > len2){
			if(c1[b1]!= c2[b2])ans += len2;
			l2 = a2[b2]+1;
			b2++;
			l1 = l2;
		}
		else if(len1 == len2){
			if(c1[b1]!= c2[b2])ans += len2;
			l2 = a2[b2]+1;
			l1 = a1[b1]+ 1;
			b1++,b2++;
		}
//		cout << l1 << ' ' << l2 << '\n';
//		cout << b1 << ' ' << b2 << '\n';
//		cout << len1 << ' ' << len2 << '\n';
//		cout << c1[b1] << ' ' << c2[b2] << '\n';
//		cout << "--------------\n";
	}
	cout << ans/2;
	return 0;
}