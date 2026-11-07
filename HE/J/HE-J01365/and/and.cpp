#include<bits/stdc++.h>
using namespace std;
int a[1000005];
int n,m,max1,max2,max3;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m; 
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==1){
	    max2=1;
		for(int i=1;i<=n;i++){
		    max2=max(max2,a[i]);
		}
		cout<<max2;
		return 0;
	}
	if(m==n){
		max3=a[1];
		for(int i=2;i<=n;i++){
		   max3=max3&a[i];
		}
		cout<<max3;
		return 0;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			max1=max(max1,a[i]&a[j]);
		}
	}
	cout<<max1;
	return 0;
}
