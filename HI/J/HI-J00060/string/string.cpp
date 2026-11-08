#include <bits/stdc++.h>
using namespace std;
int n,a[200005],f,k,l;
char c[200005];
long long d=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	l=n;
	if(n==1) cout<<0;
	for(int i=1;i<=n/2;i++){
		f=a[i];
		k=l;
		for(int j=k;j>i;j--){
			if(a[j]>=f){
				a[j]-=f;
				if(c[j]!=c[i]) d+=f;
				if(a[j]==0) l--;
				break;}
			else{
				f-=a[j];
				l--;
				if(c[j]!=c[i]) d+=a[j];
				a[j]=0;	
				}
			}
		if(l==(n+1)/2){
			cout<<d;
			return 0;}
	}	
}
