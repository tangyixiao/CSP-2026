#include<bits/stdc++.h>
using namespace std;
long long n,m,a[200001],o,t,k;
double p;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for (int i=1;i<=n;i++){
		cin>>a[i];
	}
	if (m==1){
		int zd=0;
		for (int i=1;i<=n;i++){
			if (a[i]>zd){
				zd=a[i];
			}
		}
		cout<<zd;
		return 0;
	}
	if (m==n){
		o=a[1]&a[2];
		for (int i=3;i<=n;i++){
			o=o&a[i];
		}
		cout<<o;
		return 0;
	}
	if (m==2){
		int zd=0;
		for (int i=1;i<n;i++){
			for (int j=2;j<=n;j++){
				if (i!=j){
					o=a[i]&a[j];
					if (o>zd) zd=o;
				}
			}
		}
		cout<<zd;
		return 0;
	}
	if (m==n-1){
		int zd=0;
		for (int i=1;i<=n;i++){
			o=a[1];
			for (int j=2;j<=i;j++){
				if (i==1){
					o=-1;
				}
				if (j==i ){
					continue;
				} 
				if (o==-1){
					o=a[2];
					continue;
				}
				else o=o&a[j];
			}
			if (o>zd) zd=o;
		}
		cout<<zd;
		return 0;
	}
}
