#include<bits/stdc++.h>
using namespace std;
int n,m,x;
int a[111000];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	} 
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			if(a[i-j]>=a[i]){
				a[i-j]=a[i];
				a[i]-=1;
			}
		} 
	}
	cout<<a[m];
	return 0;
}
