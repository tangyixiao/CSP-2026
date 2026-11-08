#include <bits/stdc++.h>
using namespace std;
long long n,m,a[500005],b[300005],c[300005],d[300005],k,ans;
int main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1; i<=n; i++) {
		cin>>a[i];
	}
	for(int i=1; i<=n; i++) {
		for(int j=i; j<=n; j++) {
			for(int k=n; k>=j; k--) {
				if(a[k]==a[j]) {	
					j=k;
					d[a[k]]++;
					break;
				}
			}
		}
	}for(int i=1;i<=m;i++){
		cout<<d[i]<<" ";
	}
	return 0;
}

