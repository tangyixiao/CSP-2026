#include<bits/stdc++.h>
using namespace std;
long long n,m;
long long a[500005],b[300005],c[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	int x=1;
	for(long long i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]<a[i-1]){
			x=0;
		}
	}
	if(x==1){
		for(int i=2;i<=n+1;i++){
			if(a[i]>a[i-1]){
				cout<<i-1;
			}
		}
	}
	for(long long i=1;i<=n;i++){
		long long x=1;
		b[x]=a[i];
		x=2;
		for(long long j=i+1;j<=n;j++){
			b[x]=a[j];
			for(long long q=1;q<x;q++){
				if(b[q]==b[x]){
					for(long long w=q+1;w<=x;w++){
						b[w]=0;
					}
				}
			}
			x++;
		}
		for(long long w=1;w<=n-i+1;w++){
			c[b[w]]++;
			b[w]=0;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<c[i]<<' ';
	}
}
