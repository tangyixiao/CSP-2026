#include<bits/stdc++.h>
using namespace std;
int main(){
	//freopen("and.in","r",stdin);
	//freopen("and.out","w",stdout);
	long long m,n;
	cin>>m>>n;
	long long a[m+2];
	for(int i=1;i<=m;i++){
		cin>>a[i];
	}
	for(int j=1;j<=m;j++){
		if(a[j]<a[j+1]){
			a[0]=a[j];
			a[j]=a[j+1];
			a[j+1]=a[0];
		}
	}
	cout<<a[n];
	return 0;
}