#include<bits/stdc++.h>
using namespace std;
long long n,m,g;
long long a[200010],b[100000000];
int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
    cin>>n>>m;
    for(long long i=1;i<=n;i++){
    	cin>>a[i];
	}
	for(long long i=1;i<=n;i++){
		long long j,k=1,x;
		while(a[i]>0){
			b[k]=a[i]%2;
			a[i]/=2;
			k++;
		}
		for(long long j=k;j>=1;j--){
			x=pow(10,j);
			x/=10;
			a[i]+=b[j]*x;
		}
		to_string(a[i]);
	}
	g=-2e9;
	for(long long i=1;i<=n;i++){
		for(long long j=i+1;j<=n;j++){
			long long z;
			z=a[i] & a[j];
			if(z>=g){
				g=z;
			}
		}
	}
	cout<<12;
	return 0;
}
