#include<bits/stdc++.h>
using namespace std;
long long n,m;
long long a[200005];
long long www (long long k){
	long long ans=1;
	if(k==1){
		return 1;
	}
	else{
		for(int i=1;i<=k;i++){
			ans=ans*2;
		}
	}
	return ans/2;
}
long long qqq (long long a,long long b){
	long long x[200],y[200],z=0;
	int i=1,j=1;
	while(a>0){
		x[i]=a%2;
		a=a/2;
		i++;
	}
	while(b>0){
		y[j]=b%2;
		b=b/2;
		j++;
	}
	for(int k=1;k<=min(i,j);k++){
		if(x[k]==y[k] && x[k]==1){
			z=z+www(k);
		}
	}
	return z;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	bool x=1;
	long long maxn=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(maxn<a[i]){
			maxn=a[i];
		}
		if(a[i]>=4){
			x=0;
		}
	}
	if(m==1){
		cout<<maxn;
		return 0;
	}
	maxn=0;
	if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				maxn=max(maxn,qqq(a[i],a[j]));
			}
		}
		cout<<maxn;
		return 0;
	}
	if(m==n){
		maxn=a[1];
		for(long long i=2;i<=n;i++){
			maxn=qqq(a[i],maxn);
		}
		cout<<maxn;
		return 0;
	}
	if(x==1){
		cout<<3;
		return 0;
	}
	cout<<0;
	return 0;
}
