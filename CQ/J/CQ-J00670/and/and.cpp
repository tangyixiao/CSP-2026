#include<bits/stdc++.h> 
using namespace std;
long long n,m,a[200005],t,v,z;
bool b=1; 
int main(){
	cin>>n>>m;
	for(long long i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]!=i-1)b=0;
		if(a[i]>t)t=a[i];
	}
	v=a[1];
	for(long long i=2;i<=n;i++){
		v=v&a[i];
	}
	if(m==1)cout<<t;
	if(n==m)cout<<v;
	if(b){
		z=n-1;
		for(long long i=1;i<=n-m;i++){
			z-=pow(2,i-1);
		}
		cout<<z;
	}
	return 0;
}
