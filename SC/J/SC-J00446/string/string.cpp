#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;
	cin>>n;
	long long a[n+5],sum=0,maxn=-1e9,z=0;
	char c[n+5],big;
	for(int i=0;i<n;i++){
		cin>>a[i]>>c[i]; 
		sum+=a[i];
		if(a[i]>=maxn) {
			maxn = a[i];
			big  = c[i];
		}
	}
	for(int i=0;i<n;i++){
		if(c[i]==big){
			z+=a[i];
		}
	}
	if(n%2==0) cout<<sum-z;
	else cout<<sum-z-1;
	return 0;
} 