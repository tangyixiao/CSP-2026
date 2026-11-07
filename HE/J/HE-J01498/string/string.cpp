#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    string a[200001];
	char z;
    int n,x,sum=1;
    cin>>n;
    for(int i=0;i<n;i++){
    	cin>>x>>z;
    	for(int j=0;j<x;j++){
    		a[sum]=z;
    		sum+=1;
		}
	}
	sum=0;
	for(int i=1;i<=n;i++){

		if(a[i]!=a[n+1-i]){
			a[n+1-i]=a[i];
			sum++;
		}
	}
	cout<<sum;
}
