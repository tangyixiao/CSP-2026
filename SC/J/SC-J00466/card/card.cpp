#include<bits/stdc++.h>
using namespace std;
long long n,m,a[500010],b[500010],c[300010],d[300010],oto=1;
int main(){
	freopen("card.in","r",strin);
	freopen("card.out","w",strout);
	cin>>n>>m;
	for(int i=1; i<=n; i++) cin>>a[i];
	for(int i=n; i>=1; i--){
		for(int j=1; j<=i; j++){
			if(!d[a[j]]){
				b[oto]=a[j];
				oto++;
				d[a[j]]=1;
			}else{
				while(b[oto]!=a[j]){
					b[oto]=0;
					d[b[oto]]=0;
					oto--;			
				}
			}			
		}
	}
	for(int j=1; j<=m; j++){
		if(d[j]==1){
			c[j]++;
		}
	}
	for(int i=1; i<=m; i++) cout<<c[i]<<" ";
	return 0;
}