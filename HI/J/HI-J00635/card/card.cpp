#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int a[n],b[n],c[m];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		if(i<2){
			c[i]=a[i];
		}else if(c[i-1]!=a[i]){
			c[i]=a[i];
		}else{
			c[i-1]=c[i];
		}
	}cout<<c;
	return 0;
}
