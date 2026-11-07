#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
const int N=1e6;
int n;
string f,g;
long long a[N],c[N],d[N],w=0,o=0,k=0,ds,ds1=1;
char b[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	ds=n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
	}
	for(int i=1;i<=n/2;i++){
		if(a[i]!=a[ds]){
			ds1=0;
			break;
		}
		ds--;
	}
	if(ds1==1){
		for(int i=1;i<=n/2;i++){
			if(b[i]!=b[n-i+1]){
				k=k+a[i];
			}
		}
		cout<<k;
	}
	else{
		for(long long i=1;i<=n;i++){
			for(long long j=1;j<=a[i];j++){
				w++;
				f[w]=b[i];
			}
		}
		for(int i=n;i>=n;i--){
			for(long long j=1;j<=a[i];j++){
				o++;
				g[o]=b[i];
			}
		}
		int p=1;
		for(int i=1;i<=w/2;i++){
			if(g[i]!=f[i]){
				p=0;
				k++;
			}
		}
		if(p==1){
			cout<<0;
		}
		else{
			cout<<k;
		}
	}
	return 0;
}