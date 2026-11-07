#include  <bits/stdc++.h>
using namespace std;
long long n , a[200010], sum,ans;
string c[200010],s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	// 2 a
//	2 b
//	1 c -> aabbc
	cin >> n;
	for(int i = 1;i <= n;i++){
		long long now;
		cin >> now >> c[i];
		sum += now;
		a[i] = now;
	}
	long long sum1 = ceil(sum/2.0);
	for(int i = 1;i <= n;i++){
		for(int j = 1; j <= a[i];j++) s += c[i];
	}
	for (int i = 0;i <= sum1; i++){
		if(s[i] != s[sum-i-1]){
			ans++;
		}
	} 
	if (ans != 0) ans --; 
	cout << ans;
	return 0;
} 