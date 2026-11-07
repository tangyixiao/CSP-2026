//card D
#include<bits/stdc++.h>
using namespace std;

int a[500005], n, m, cnt[300005];

int main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=0; i<n; i++) {
		cin>>a[i];
	}
	
	for(int i=0; i<n; i++) {
		int p[500005]={0}, po=0;
		for(int j=i; j<m; j++) {
			for(int k=0; k<j; k++) {
				if(p[k]==a[j]) {
					po=k-1;
				}
			}
			p[po]=a[j];
			po++;
		}
		for(int j=0; j<po; j++) {
			for(int k=0; k<m; k++) {
				if(k+1 == p[j]) {
					cnt[k]++;
				}
			}
		}
	}
	for(int i=0; i<m; i++) {
		cout<<cnt[i]<<' ';
	}
	return 0;
}
