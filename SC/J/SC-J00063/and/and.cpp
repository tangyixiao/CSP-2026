#include<bits/stdc++.h>
using namespace std;
long long a[10000005],b[10000005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	long long n,m;
	cin>>n>>m;
	for(long long i=1;i<=n;i++){
		cin>>a[i];
	}
	
	for(long long i=1;i<=n;i++){
		long long mx=0,f=0;
		for(int j=1;j<=n;j++){
			if(mx<a[j]){
				mx=a[j];
				f=j;
			}
		}
		a[f]=0;
		b[i]=mx;
	}
	cout<<b[m];
	
	return 0;
}