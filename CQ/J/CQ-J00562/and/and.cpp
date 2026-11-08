#include <bits/stdc++.h>
using namespace std;
long long n,m,a[200005],b,d=1;
int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1; i<=n; i++) {
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	b=a[n];
	for(int i=n-1; i>n-m; i--) {
		d=1;
		if(b-a[i]>=2) {
			while(1) {
				d=d*2;
				if(d+1==b) {
					m++;
                 b=a[i];
                 break;
				}else if(d>b){
					b=a[i]&b;
					break;
				}
			}
		}else {
			b=a[i]&b;
		}
	}
	cout<<b;
	return 0;
}

