#include <bits/stdc++.h>
using namespace std;
int n,a,k,l;
char b;
char c[1000000000];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a>>b;
		k=k+a;
		for(;l<=k;l++){
			c[l]=b;
		}
	}int g=0;
	if(k%2==0){
		for(int i=1,l=k;i<=k/2,l>=k/2+1;i++,l--){
			if(c[i]!=c[l]) g++;
		}
	}
	else{
		for(int i=1,l=k;i<=(k-1)/2,l>=k-(k-1)/2;i++,l--){
			if(c[i]!=c[l]) g++;
		}
	}
	cout<<g;
	return 0;
}