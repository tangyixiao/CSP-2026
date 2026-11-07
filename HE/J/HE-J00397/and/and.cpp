#include<bits/stdc++.h>
using namespace std;
long long n,m,l=0,a[200010],b[200010];
int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0; i<n; i++) {
		cin>>a[i];
		b[i]=a[i];
	}
	while(l<m) {
		for(int i=0; i<n; i++) {
			long long maxx=0;
			for(int j=0; j<n; j++) {
				if(maxx<(a[i] & b[j])&&i!=j) {
					maxx=(a[i] & b[j]);
					cout<<a[i]<<" "<<b[j]<<" "<< (a[i] & b[j])<<" "<<endl;
				}
			}
			b[i]=maxx;
		}
		l++;
	}
	long long maxxx=0;
	for(int i=0; i<n; i++) {
		if(maxxx<b[i]) {
			maxxx=b[i];
		}
		
	}
	cout<<maxxx;
	fclose(stdin);
	fclose(stdin);
	return 0;
}
