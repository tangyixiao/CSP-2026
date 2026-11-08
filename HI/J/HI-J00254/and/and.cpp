#include<bits/stdc++.h>
using namespace std;
int n,m,a[100000005],maxx=-1,h;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	} 
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			for(int k=1;k<=m;k++){
				h=(a[i]&a[j]);
			}
		}
		maxx=max(maxx,h);
		h=0;
	} 
	cout<<maxx;
	
	
	return 0;
} 
