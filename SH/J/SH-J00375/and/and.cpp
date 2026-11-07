#include <bits/stdc++.h>
using namespace std;
long long n,m,a[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
    cin >> n >> m;
    for(long long i=0;i<n;i++){
    	cin >> a[i];
	}
	sort(a,a+n);
	long long cmp=a[n-1];
	for(long long i=0;i<m-1;i++){
		cmp&=a[n-i-2];
	}
	cout << cmp;
	return 0;
}
