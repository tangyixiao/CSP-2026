#include<bits/stdc++.h>
using namespace std;
const int N=2e5+100;
long long n,l=1,r,s1,s2;
long long a[N];
char c[N];
long long maxn;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	r=n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	while(l<r){
		if(a[l]==a[r]){
			if(c[l]!=c[r])	maxn=maxn+a[l],c[l]=c[r];
			l++,r--;
		}	
		else	if(a[l]<a[r]){
			if(c[l]!=c[r])	maxn+=a[l],c[l]=c[r];
			a[r]=a[r]-a[l];
			l++;	
		}
		else{
			if(c[l]!=c[r])	maxn+=a[r],c[r]=c[l];
			a[l]=a[l]-a[r];
			r--;
		}
	}
	cout<<maxn;
	return 0;
} 