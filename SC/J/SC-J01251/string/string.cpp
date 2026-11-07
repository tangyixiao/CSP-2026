#include<bits/stdc++.h> 
using namespace std;
int a[1000005],f[1000005];
string b[1000005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
		f[i]=f[i-1]+a[i];
	}
	long long int j=f[n],q=f[1],p=1,g=0,m=1,k=f[1];
	for(long long int i=1;i<=j;i++){
		while(i>q){
			 p++;
			 q=f[p];
		}
		k=f[1];
		m=1;
		while(j>k){
			 m++;
			 k=f[m];
		}
		if(b[p]!=b[m]){
			g++;
		}
		j--;
	}
	cout<<g;
	return 0;
}
