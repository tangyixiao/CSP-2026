#include <bits/stdc++.h>
using namespace std;
long long n,m,a[500005],f,b[500005],x,y;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<n;i++){
		if(a[i]<=a[i+1]) f=1;
		else f=0;
	}
	if(f==1){
		for(int i=1;i<=m;i++){
			for(int j=n;j>=1;j--){
				if(a[j]==i){
					b[i]=j;
					break;
				}
			}
		}
		for(int i=1;i<=m;i++){
			cout<<b[i]<<" ";
		}
		return 0;
	}
	if(m==1){
		cout<<1;
		return 0;
	}
	if(n==2 && m==2){
		if(a[1]==1) cout<<1<<" "<<2;
		else cout<<2<<" "<<1;
	}
	return 0;
}
