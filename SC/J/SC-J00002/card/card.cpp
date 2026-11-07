#include<bits/stdc++.h>
using namespace std;
const long long N=5e5;
long long n,a[N+5],m,b[N+5],c[N+5];
int main(){
//	fropen("card.in","r","stdin");
//	fropen("card.out","w","stdout");
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=0;j<n;j++){
			b[j]=a[i-1];
		}
		for(int j=0;j<n;j++){
			c[b[i]]++; 
		}
	}
	for(int i=0;i<m;i++){
		cout<<c[i]<<" ";
	}
	return 0;
}