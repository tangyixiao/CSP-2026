#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int n,m;
long long a[N];
int main(){
	freopen(and.in,"r",stdin);
	freopen(and.out,"w",stdout);
	long long mx=0;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		mx=max(mx,a[i]);
	}
	if(m==1){
		cout<<mx;
		return 0;
	}
	if(m==n-1){
		mx=0;
		for(int i=1;i<=n;i++){
			long long t=1,l;
			for(int j=1;j<=n;j++){
				if(t==1){
					l=a[j];
				}
				if(j!=i&&t!=1){
					l=l&&a[j];
				}
			}
			mx=max(mx,l);
		}
		cout<<mx;
		return 0;
	}
	if(m==n){
		int l=a[1];
		for(int i=2;i<=n;i++){
			l=l&&a[i];
		}
		cout<<l;
		return 0;
	}
	return 0;
}