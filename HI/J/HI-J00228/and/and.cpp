#include <bits/stdc++.h>
using namespace std;
int n,m;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	
	int a[n+1]={};int a2=-1;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		a2=max(a[i],a2);
	}
	if(m==1){
		cout<<a2;
	}else if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				a2=max(a2,a[i]&a[j]);
			}
		}
		cout<<a2;
	}else if(m==n){
		for(int i=1;i<n;i++){
			a[0]=a[i]&a[0]; 
		}
		cout<<a[0];
	}else if(m==n-1){
		for(int i=0;i<n;i++){
				for(int k=0;k<n;k++){
					if(a[i]!=a[k]){
						a[0]&=a[i];
					}
				}	
		}
		cout<<a[0];
	}
	return 0;
}
