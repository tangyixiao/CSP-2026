#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[200005],cf[50],ng=0,ansn=0,b[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cf[0]=1;
	for(int i=1;i<=29;i++){
		cf[i]=cf[i-1]*2;
	}
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]>=cf[29]){
			ng++;
			a[i]-=cf[29];
			b[ng]=a[i];
		}
	}
	if(ng>=m){
		ansn+=cf[29];
		for(int i=1;i<=ng;i++){
			a[i]=b[i];
		}
		n=ng;
	}
	for(int i=28;i>=0;i--){
		ng=0;
		for(int j=1;j<=n;j++){
			if(a[j]>=cf[i]){
				ng++;
				a[j]-=cf[i];
				b[ng]=a[j];
			}
		}
		if(ng>=m){
			ansn+=cf[i];
			for(int j=1;j<=ng;j++){
				a[j]=b[j];
			}
			n=ng;
		}
	}
	cout<<ansn;
	return 0;
}
