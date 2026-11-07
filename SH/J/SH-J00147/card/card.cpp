#include<bits/stdc++.h>
using namespace std;
int main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int a[n],b[n];
	for(int i=0; i<n; i++) {
		cin>>a[n];
	}
	for(int i=1; i<=m; i++) {
		int cnt=0;
		for(int s=0; s<n; s++) {
			int y=s;


			for(int j=0; j<n; j++) {
				for(int k=0; k<j; k++) {
					if(b[k]==a[j]) {
						for(int x=k; x<j; x++) {
							b[x]=0;
						}
						y=k;
					}
				}
				b[y]=a[j];
				y++;
			}
			for(int j=0; j<y; j++) {
				if(i==b[j]) {
					cnt++;
				}
			}

		}
		cout<<cnt<<" ";
	}
	return 0;
}
