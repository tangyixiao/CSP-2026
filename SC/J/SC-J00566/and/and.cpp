#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	long long a[200005];
	cin>>n>>m;
	for(int i=1;i<=n;i++) {
		cin>>a[i];
	}
	if(m==n) {
		int b=a[1];
		for(int i=1;i<=n;i++) {
			b=(b&a[i]);
		}
		cout<<b;
		return 0;
	}
	if(m==1) {
		sort(a+1,a+n+1);
		cout<<a[n];
	}
	if(m==2) {
		long long b,c=0;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++) {
				b=(a[i]&a[j]);
				if(b>=c){
					c=b;
				}
			}
		}
		cout<<b;
	}
	if(m==3) {
		long long b,c=0;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++) {
				for(int k=1;k<=n;k++) {
					b=(a[i]&a[j]);
					b=(b&a[k]);
				if(b>=c){
					c=b;
				}
				}
				
			}
		}
		cout<<b;
	}
	if(m==4) {
		long long b,c=0;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++) {
				for(int k=1;k<=n;k++) {
					for(int l=1;l<=n;l++) {
						b=(a[i]&a[j]);
						b=(b&a[k]);
						b=(b&a[l]);
						if(b>=c){
							c=b;
						}
					}
					
				}
			}
		}
		cout<<b;
	}
	return 0;
} 