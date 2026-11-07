#include<bits/stdc++.h>
using namespace std;
int m,n;
int a[200005];
int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);

	cin>>n>>m;
	for(int i=1; i<=n; i++) {
		cin>>a[i];
	}
	int maxi=-1;
	int maxii=0;
	for(int i=1; i<=n; i++) {
		int cnt=1;
		maxii=a[i];
		for(int j=i+1; j<=n; j++) {
			if(cnt<m) {
				maxii=(maxii&a[j]);
				cnt++;
			} else if(cnt==m) {
				if(maxii>=maxi) {
					maxi=maxii;
				}
				cnt=1;
				maxii=a[i];
			}
		}
	}

	cout<<maxi;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
