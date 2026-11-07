#include<bits/stdc++.h>
using namespace std;
long long  n,m,a[2006];
int add(int a,int b){
	int i=1,c[100],e=0,r=1;
	while(a!=0&&b!=0){
		int q=a%2,w=b%2;
		if(q==w&&q!=0)c[i]=1;
		else c[i]=0;
		a/=2;
		b/=2;
		i++;
	}
	for(int j=1;j<i;j++){
		e+=c[j]*r;
		r*=2;
	}
	return e;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==1){
		int q=0;
		for(int i=1;i<=n;i++){
			if(q<a[i])q=a[i];
		}
	    cout<<q;
	}else if(m==2){
		int q=0;
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				if(q<add(a[i],a[j])&&i!=j)q=add(a[i],a[j]);
			}
		}
	    cout<<q;
	}
	return 0;
}
