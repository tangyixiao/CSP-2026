#include <bits/stdc++.h>
using namespace std;
const int N = 2e5+5;
int n;
long long a[N],b[N];
long long sum1[N],sum2[N];
char c1[N],c2[N];
int main(){
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(int i=1; i<=n; i++){
		cin >> a[i] >> c1[i];
		c2[n-i+1] = c1[i];
		b[n-i+1] = a[i];
	}
	for(int i=1; i<=n; i++){
		sum1[i] = sum1[i-1]+a[i];
		sum2[i] = sum2[i-1]+b[i];
	}
	long long ans = 0;
	for(int i=1,j=1; i<=n; i++){
		while(j<=n&&sum1[i]>=sum2[j]){
			if(c1[i]!=c2[j]) ans += min(b[j],sum2[j]-sum1[i-1]);
			j++;
		}
		if(c1[i]!=c2[j]) ans += min(sum1[i]-sum2[j-1],sum1[i]-sum1[i-1]);
	}
	cout << ans/2;
	return 0;
} 