#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int a[n+1],b[m+1],s[n+1],l;
	for (int i=1;i<=n;i++) {
		cin>>a[i];
	}
	for (int i=1;i<=m;i++) {
		b[i]=0;
	}
	for (int i=1;i<=n;i++) {
		l=1;
		for (int j=i;j<=n;j++,l++) {
			s[l]=a[j];
			for (int k=1;k<=l;k++) {
				if (s[k]==s[l]) {
					l=k;
					break;
				}
			}
		}
		l--;
		for (int j=1;j<=l;j++) {
			b[s[j]]++;
		}
	}
	for (int i=1;i<=m;i++) {
		cout<<b[i]<<' ';
	}
	
	return 0;
}


