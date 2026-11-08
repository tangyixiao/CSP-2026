#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500005];
bool v[300005];
int b[300005];
void csh() {
	for(int i=1; i<=m; i++) {
		if(v[i]!=0) b[i]++;
		v[i]=0;
	}
	return ;
}
int main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=0; i<n; i++) {
		cin>>a[i];
	}
	for(int e=0; e<n; e++) {
		for(int i=e; i<n; i++) {
			if(v[a[i]]==0) {
				v[a[i]]=1;
			} else {
				int j=i-1;
				while(a[j]!=a[i]) {
					v[a[j]]=0;
					j--;
					
				}
			}
		}
		csh();
//		for(int i=1; i<=m; i++) {
//			cout<<b[i]<<" ";
//		}
//		cout<<endl;
	}
	for(int i=1; i<=m; i++) {
		cout<<b[i]<<" ";
	}
	return 0;
}
