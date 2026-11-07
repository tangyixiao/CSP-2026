#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a,sum;
	char c;
	cin>>n;
	long long y=n;
	for(int h=0;h<n;h++){
		cin>>a>>c;
		int z[h];
		int u[h];
		u[h]=c;
		z[h]=a;
		if(h+1<=n and h-1>=0){
			if(u[h]=u[h-1]){
				sum=sum+1;
			}
		}
		if(h>0){
			if(z[h]==z[h-1]){
				y=z[h];
			}
		} 
	}
	if(sum==n-1){
		y=0;
		cout<<y;
	}
	else
		cout<<y*sum;
	
	return 0;
}
