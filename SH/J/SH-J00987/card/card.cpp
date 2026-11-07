#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=5e5+10;
int n,m;
ll a[N],b[N],c[N];
int main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) {
		cin>>a[i];
	}
	for(int i=1;i<=n;i++) {
		memset(b,0,sizeof b);
		for(int j=i;j<=n;j++) {
			b[j]=a[j];
			for(int l=i;l<j;l++) {
				if(b[l]==b[j]) {
					for(int k=l+1;k<=j;k++) {
						b[k]=0;
					}
				}
			}
		}
		for(int j=1;j<=m;j++) {
			for(int l=i;l<=n;l++) {
				if(a[j]==b[l]) {
					c[a[l]]++;
				}
			}
		}
	}
	for(int i=1;i<=m;i++) {
		cout<<c[i]<<' ';
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
