#include<bits/stdc++.h>
using namespace std;
int n; 
int x[200005];
char z[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	long long wz=0,l=1,r=n;
	for(int i=1;i<=n;i++){
		cin>>x[i]>>z[i];
	}
	long long e=0;
	while(l<r){
		if(x[l]<x[r]){
			if(z[l]!=z[r]){
				e+=x[l];
			}
			x[r]-=x[l];
			x[l]=0;
			l++;
		}
		else{
			if(z[l]!=z[r]){
				e+=x[r];
			}
			x[l]-=x[r];
			x[r]=0;
			r--;
		}
	}
	cout<<e;
	return 0;
}
