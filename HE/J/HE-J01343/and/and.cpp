#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int m,n,i,j,a[100],b[100]={0},t=0;
	cin>>n>>m;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	for(i=0;i<n;i++){
		b[i]=a[i]&a[i+1]; t++;
	}
	for(i=0;i<t;i++){
		if(b[i]<b[i+1]){
			swap(b[i],b[i+1]);
		}
	}
	cout<<b[0];
	return 0;
}
