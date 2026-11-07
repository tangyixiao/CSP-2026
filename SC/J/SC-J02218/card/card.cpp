#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	long long n,m;
	cin>>n>>m;
	long long a[n],b[m]={0};
	for(long long i=0;i<n;i++){
		cin>>a[i];
	}for(long long i=0;i<n;i++){
		long long c[n],x=0;
		for(long long j=i;j<n;j++){
			for(long long k=0;k<x;k++){
				if(c[k]==a[j]){
					x=k;
				}
			}c[x]=a[j];
			x++;
		}for(long long j=0;j<x;j++){
			b[c[j]-1]++;
		}
	}for(long long i=0;i<m;i++){
		cout<<b[i]<<' ';
	}
	return 0;
} 