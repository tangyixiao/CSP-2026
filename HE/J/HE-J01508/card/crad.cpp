#include <bits/stdc++.h>
using namespace std;
int a[100000000];
int b[100000000];
int main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n;
	cin>>n;
	int m;
	cin>>m;
	for(int i=1; i<=n; i++) {
		cin>>a[i];
	}
	int ans=0;
	for(int i=n-m; i<=n; i++) {
		for(int j=1; j<=i; j++) {
			if(a[j]==a[i]&&i!=j) {
				a[i-1]=0;
				a[j]=0;
			}
		}
		while(m) {
			for(int j=1; j<=i; j++) {
				for(int y=1; y<=n; y++) {
					if(a[y]==m) {
						ans++;
					}
				}
				m--;
				cout<<ans<<' ';
			}
		}
		ans=0;
	}
	return 0;
}
