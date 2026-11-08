#include<bits/stdc++.h>
using namespace std;
int n , a[200005] , b[200005];
long long ans;
char c[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(int i = 1;i <= n;i++)
		cin >> a[i] >> c[i];
	for(int i = 1;i <= n;i++)
		b[i] = a[i];
	int l = 1 , r = n;
	for(int i = 1;l <= r;i++){
		if(c[l] != c[r])
			ans++;
		a[l]--;
		b[r]--;
		if(a[l] == 0) l++;
		if(b[r] == 0) r--;
	}
	cout << ans;
	return 0;
} 
