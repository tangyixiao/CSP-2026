#include <bits/stdc++.h>
using namespace std;
int n,m,a[500009],b[500009],c[500009];
void f(int x) {
	int k=0;
	for(int i=x;i<=n;i++) {
		for(int j=1;j<=k;j++) {
			if(b[j]==a[i]) {
				k=j-1;
				break;
			}
		}
		k++;
		b[k]=a[i];
	}
	for(int i=1;i<=k;i++) {
		c[b[i]]++;
	}
}
int main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) {
		scanf("%d",&a[i]);
	}
	int i=1;
	while(i<=n) {
		f(i);
		i++;
	}
	for(int i=1;i<=m;i++) cout<<c[i]<<" ";
	return 0;
}
