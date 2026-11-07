#include<bits/stdc++.h>
using namespace std;
int n,m,a[1000000],b[1000000],c[1000000],ma;
int main(){
	freopen("and.in","r",stdin);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		b[i]=a[i];
		for(int j=i+1;j<=i+m;j++){
			b[j]=b[j-1]&&a[j];
		}
		c[i]=b[i+m];
		if(c[i]>ma){
			ma=c[i];
		}
	}
	cout<<ma;
	freopen("and.out","w",stdout);
	
	return 0;
}
