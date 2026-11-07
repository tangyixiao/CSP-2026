#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","w",stdin);
	freopen("string.out","r",stdout);
	long long n,c=0,h=0,l=0,o=0,p=0;
	cin>>n;
	long long a[n+2];
	string b[n+2],r;
	for(int i=0;i<n;i++){
		cin>>a[i]>>b[i];
	}
	for(int j=0;j<n;j++){
		c+=a[j];
	}
	string d[c+2];
	for(int z=0;z<n;z++){
		r=b[z];
		h=a[z];
		for(int k=0;k<h;k++){
			d[l]=r;
			l++;
		}
	}
	l--;
	p=l;
	for(int u=0;u<(c/2);u++){
		if(d[u]!=d[l]){
			o++;
			l--;
		}
	}
	cout<<o;
	return 0;
} 