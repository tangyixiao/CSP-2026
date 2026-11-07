#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	long long n,m;
	cin>>n>>m;
	long long b[59995],d[59995]={};
	for(long long i=0;i<n;i++){
		cin>>b[i];
	}
	for(long long i=0;i<n;i++){
		long long c[59995]={};
		long long a[59995]={};
		for(long long j=i;j<n;j++){
			if(a[b[j]]==1){
				for(long long z=i;z<j;z++){
					c[b[z]]=0;
				}
				a[b[j]]=0;
			}
			c[b[j]]++;
			a[b[j]]=1;
		}
		for(long long j=1;j<=m;j++){
			d[j]+=c[j];
		}
	}
	for(long long i=1;i<=m;i++){
		cout<<d[i]<<" ";
	}
	}
