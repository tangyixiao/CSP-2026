#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+10;
int n,a[N],cnt;
char c[N]; 
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin >> n;
	for (int i=1;i<=n;++i){
		cin >> a[i] >> c[i];
	}
	for (int i=1,j=n;i<j;){
		if (a[i] < a[j]){
			if (c[i] != c[j]) cnt += a[i];
			a[j] -= a[i];
			i++;
		}
		else if (a[i] > a[j]){
			if (c[i] != c[j]) cnt += a[j];
			a[i] -= a[j];
			j--;
		}
		else{
			if (c[i]!=c[j])cnt += a[i];
			i++;
			j--;
		}
	}
	cout << cnt;
	return 0;
}
