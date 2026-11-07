#include<bits/stdc++.h>
using namespace std;
int two(int x){
	long long a=1;
	int b=0;
	long long c=0;
	long long d;
	while(a*2<=x){
		a=a*2;
		b++;
	}
	while(x!=0){
		if(a>x){
			a=a/2;
			b--;
		}
		else{
			x=x-a;
			a=a/2;
			d=1;
			for(int i=1;i<=b;i++) d=d*10;
			c=c+d;
			b--;
		}
	}
	return c;
}
int ad(int x,int y){
	int a=x+two(y);
	int b=1;
	long long c=1;
	long long d,e;
	d=0;
	while(c*10<a){
		c=c*10;
		b++;
	}
	for(int i=1;i<=b;i++){
		e=(a-a%c)/c;
		a=a%c;
		if(e==2) d=d+c;
		c=c/10;
	}
	return d;
}
int main(){
//	freopen("card.in","w",stdin);
//	freopen("card.out","r",stdout);
    int n,m;
    cin>>n>>m;
    long long a[200007];
    int nt[200007];
    int no=0;
    long long ans=0;
    long long bns=0;
    for(int i=1;i<=n;i++) cin>>a[200007];
    if(m==1){
    	for(int y=1;y<=n;y++){
    		if(a[y]>ans) ans=a[y];
		}
	}
	else{
		for(int i=1;i<=n;i++){
    		for(int y=1;y<=n;y++){
    			if(ad(two(a[i]),a[y])>ans) ans=ad(two(a[i]),a[y]);
			}
		}
		for(int i=1;i<=m;i++){
			for(int y=1;y<=n;y++){
    			if(ad(ans,a[y])>bns) bns=ad(ans,a[y]);
			}
			ans=bns;
			bns=0;
		}
	}
	int i=0;
    while(two(i)!=ans){
    	i++;
	}
	cout<<i;
	return 0;
}
