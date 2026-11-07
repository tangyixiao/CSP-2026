#include <bits/stdc++.h> 
using namespace std;
int n,m;
int a[1000000];
int b[1000000];
int c[1000000];
int lx;
int shen(int l){
	for(int i=1;i<=n;i++){
			if(l==m){
				int k=c[0];
				for(int i=1;i<=l-1;i++){
					k&=c[i];
				}
				lx=max(k,lx);
		}
		if(b[i]==1)continue;
		b[i]=1;
		c[l]=a[i];
		l++;
		shen(l);
		b[i]=0;
		l--;
		c[l]=0;
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	int mx=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		mx=max(mx,a[i]);
	}
	if(m==n){
		int k=a[1];
		for(int i=2;i<=n;i++){
			k&=a[i];
		}
		cout<<k;
		return 0;
	}
	if(m==1){
		cout<<mx;
		return 0;
	}
	
	
	shen(0);
	cout<<lx;
	
	
	return 0;
}
