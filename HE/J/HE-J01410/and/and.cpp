#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005],k=-1e9;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(m==1){
			k=max(k,a[i]);
		}
		if(m==n){
			k=k&a[i];
		}
		
	}
	if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(i!=j){
					k=max(k,a[i]&a[j]);
				}
			}
		}
	}
	cout<<k;
	return 0;
} 

