#include<bits/stdc++.h>
using namespace std;
long long n,m,a[200010],b[100010],f=1;
int main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=0; i<n; i++) {
		cin>>a[i];
	}
	long long bb=0;
	while(n--) {
		for(int i=n-1; i>=bb; i--) {
			f=1;
			for(int j=bb; j<n-1; j++) {
				if(a[i]==a[j]) {
					f=0;
					break;
				}
			}
			if(f==0) {
				break;
			} else {
				b[a[i]]++;
			}
		}
		bb++;
	}
	for(int i=1; i<=m; i++) {
		cout<<b[m]<<" ";
	}
	fclose(stdin);
	fclose(stdin);
	return 0;
}
