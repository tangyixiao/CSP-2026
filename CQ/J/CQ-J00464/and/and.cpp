#include <bits/stdc++.h>
using namespace std;
int a[10010],b[10010],c[10010];

int main(){
    freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		b[i]==10000000;
		for(int j=1;j<=n;j++){
			if(a[i]=a[j]){
				c[i]++;
			}
		} 
	}
	for(int i=1;i<=n;i++){
		if(c[i]>=m){
			b[i]=a[i]; 
		}
	}
	int ma=b[1];
	for(int i=1;i<=n;i++){
		ma=max(b[i],ma);
	}
	cout<<ma;
	return 0;
}
