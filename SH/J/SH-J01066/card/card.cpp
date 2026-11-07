#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500005];
int b[300005];
int main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++) {
		cin>>a[i];
	}
	int c[500005];
	int t=0;
	for(int i=0;i<n;i++) {
		for(int j=0;j<n;j++) c[j]=0;
		for(int j=i;j<n;j++) {
			c[j]=a[j];
			for(int k=i;k<j;k++) {
				if(c[j]==c[k]) {
					for(int l=k;l<j;l++) c[l]=0;
				}
			}
		}
		for(int j=i;j<n;j++) {
			b[c[j]]++;
		}
	}
	for(int i=1;i<=m;i++) {
		cout<<b[i]<<" ";
	}
	return 0;
}
