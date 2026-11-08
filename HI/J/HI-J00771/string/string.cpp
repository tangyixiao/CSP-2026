#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
int a[N];
char b[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;cin>>n;
	long long c=0;
	
	for(int i=1;i<=n;i++){
		cin>>a[i];
		cin>>b[i];
		c+=a[i];
	}
	long long d=0;
	c/=2;
	
	long long e=0,g=0;
	int ii=1;
	for(;e<c;ii++){
		e+=a[ii];
		g++;
	}
	long long f=e-c,h=n-g,k=c;
	if(f>=0)h+=1;
	int j=1;
	int aa,bb;
	for(int i=h;i<=n;){ 
		int cc=a[i];
		if(a[i]>=a[j])cc=a[j];
		if(b[j]==b[i]){
			k-=cc;
		}
		if(a[i]-cc<=0){
			aa=a[i]-cc;
			i++;
			a[i]-=aa;
		}
		if(a[j]-cc<=0){
			bb=a[j]-cc;
			j++;
			a[j]-=bb;
		}
	}
	if(k<=0)cout<<0;
	else cout<<k;
}
