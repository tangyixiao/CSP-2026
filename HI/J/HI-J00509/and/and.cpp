#include<iostream>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,a[10001],b[10001],x;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int j=0;j<n;j++){
		for(int i=0;i<n;i++){
		    if(a[i]<a[i+1]){
			    x=a[i];
			    a[i]=a[i+1];
			    a[i+1]=x;
		    }
	    }
	}
	for(int i=0;i<m;i++){
		b[i]=a[i];
	}
	cout<<b[m];
	return 0;
}
