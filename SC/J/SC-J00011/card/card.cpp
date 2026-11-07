#include<bits/stdc++.h>
using namespace std;
int n,m,a[500010],b[500010],c;
bool f[500010];
int main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) {
		cin>>a[i];
	}
	c=n;
	for(int i=1;i<=n;i++) {
		for(int j=i;j<=n;j++) {
			for(int x=1;x<=n;x++) {
				if(a[j]==a[x]) {
					for(int k=j+1;k<=n;k++) {
						a[k]==0;
					}
					c=j;
					f[j]==true;
				}
			}
			if(f[j]==false){
				c++;
				a[n+1]==a[j];
			}
			
		}
		for(int j=1;j<=c;j++) {
			for(int i=1;i<=m;i++) {
				if(a[j]==a[i]) {
					b[i]++;
					break;
				}
			}
		}
	}
	for(int i=1;i<=m;i++) {
		cout<<b[i]<<" ";
	}
	return 0;
}