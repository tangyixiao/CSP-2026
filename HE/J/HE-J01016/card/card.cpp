#include<bits/stdc++.h>
using namespace std;
int a[500005] , b[300005] , c[300005];
int main() {
	
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n , m;
	cin >> n >> m;
	for (int i=1;i<=n;i++) {
		cin >> a[i];
		b[a[i]]++;
		c[a[i]]=i;
	}
	bool f=true;
	for (int i=1;i<m;i++) {
		if (c[i]>c[i+1]) {
			f=false;
			break;
		}
	}
	if (f) {
		for (int i=1;i<=m;i++) {
			cout << c[i] << " ";
		}
	} else {
		for (int i=1;i<=m;i++) {
			if (c[i]==n) {
				printf("%d ",n);
			} else {
				if (b[i]%2==0) {
					cout << c[i] << " ";
				} else {
					cout << b[i] << " ";
				}
			}
		}
	}
	
	return 0;
}
