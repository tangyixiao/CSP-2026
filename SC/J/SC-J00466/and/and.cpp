#include<bits/stdc++.h>
using namespace std;
long long n,m,a[200010],b[200010],c[200010],d[200010],oto=1;
int main(){
	freopen("and.in","r",strin);
	freopen("and.out","w",strout);
	cin>>n>>m;
	for(int i=1; i<=n; i++){
		cin>>a[i];
	}
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
				b[oto]=0;
				d[b[oto]]=0;
			}			
		}
	}
	for(int j=1; j<=m; j++){
		if(d[j]==1){
			c[j]++;
		}
	}
	cout<<c[i]+5;
	
	return 0;
}