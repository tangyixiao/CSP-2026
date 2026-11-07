#include<bits/stdc++.h>
using namespace std;
int const N=2*1e5+10;
int a[N];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1; i<=n; i++){
		cin>>a[i];
	}
	int maxn=0;
	if(m==2){
		for(int i=1; i<=n-1; i++){
			for(int j=i+1; j<=n; j++){
				maxn=max(maxn,a[i]&a[j]);
			}
		}
	}
	if(m==1){
		for(int i=1; i<=n; i++){
	    	maxn=max(maxn,a[i]);
		}
	}
	if(m>2){
		for(int i=1; i<=n-m+1; i++){
			int sum=a[i];
			for(int j=i; j<=m+1; j++){
				sum=sum&a[j];	
			}
			maxn=max(maxn,sum);
		}
	}
	cout<<maxn;
	return 0;
}
