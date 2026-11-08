#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[50005];
int am,ma;
int main() {
freopen("and.in","r",stdin);
freopen("and.out","W",stdout);
for(int i=1;i<=n;i++){
	cin>>a[i];	
	am=max(am,a[i]);
}
	if(m==1){
		cout<<am;
	}else if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=i;j<=n;j++){
			ma=max(a[i]&a[j],am);
			}
		}
		cout<<ma;
	}else cout<<1;
return 0;
}
