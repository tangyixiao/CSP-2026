#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,az=0;
	cin>>n;
	int a[n+1];
	char c[n+1];
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		az+=a[i];
	}
	if(n==1){
		cout<<"0";
		return 0;
	}
	int i=1,r=n;
	int b=0,s=0,sum=0;
	int midn,midi=n/2;
	if(n%2==0){
		midn=n/2+1;
	}else{
		midn=n/2+2;
	}
	int rz=a[i],iz=a[r];
	while(1){
		if(r<midn||i>midi){
			cout<<sum;
			return 0;
		}
		b=max(iz,rz);
		s=min(iz,rz);
		if(c[i]!=c[r]){
			sum+=b-s;
		}
		if(a[i]>a[r]||iz==rz){
			while(iz>rz||iz==rz){
				r--;
				rz+=a[r];
			}
		}else{
			while(iz<rz){
				i++;
				iz+=a[i];
			}
		}
		
	}
	return 0;
} 
