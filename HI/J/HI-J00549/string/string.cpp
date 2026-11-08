#include<bits/stdc++.h>
using namespace std;
long long n,a[100000010],z,x[50000010],j;
char c[100000010],b[50000010];
int main(){
	//freopen("string.in","r",stdin);
	//freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n/2;i++){
		cin>>a[i];
		cin>>c[i];
	}
	for(int i=n/2;i>=1;i--){
		j++;
		x[j]=a[i];
		b[j]=c[i];
	}
	for(int i=n/2;i<n;i++){
		cin>>a[i];
		cin>>c[i];
		if(c[i]!=b[j]){
			z+=a[i];
		}
		if(c[i]==b[j]&&a[i]<x[j]){
			z=z+x[j]-a[j]; 
		}
		j--;
	}
	cout<<z;
	return 0;
}
