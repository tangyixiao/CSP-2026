#include<bits/stdc++.h>
using namespace std;
long long n,k,f,m; 
int a[1000009];
string d,h;
char b[1000009];

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
		cin>>b[i];
		k+=a[i]; 
		for(int k=0;k<a[i];k++){
		 	d+=b[i];
		}
		
	}
	for(int i=k-1;i>=0;i--){
		h+=d[i];	
	} 
	for(int i=0;i<k;i++){
		if(d[i]!=h[i]) f++;	
	}
	
	cout<<f/2;
	
	return 0;
}
