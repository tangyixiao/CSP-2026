#include <bits/stdc++.h>
using namespace std;
long long n,a[1000005],b[1000005], L,ans;
char c[1000005],d[1000005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(int i = 1;i <= n;i++){
		cin >> a[i] >> c[i];
		L += a[i];
	}
	int l = 1,r = n;
	while(l < r){
		if(c[l] == c[r]){
			long long minn = min(a[r],a[l]);
			a[l] -= minn,a[r] -= minn;
			if(a[l] == 0)
			    l++;
		    if(a[r] == 0)
		        r--;
		}
		else{
			long long minn = min(a[r],a[l]);
			a[l] -= minn,a[r] -= minn,ans += minn;
			if(a[l] == 0)
			    l++;
		    if(a[r] == 0)
		        r--;
		}
	}
	cout << ans;
	return 0;
}
