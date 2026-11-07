#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
	long long m,n,b,d,f;
	cin>>n>>m;
	long long a[n+1],c[n+1],g[m+1];
	for(int i=1;i<=n;i++){
		cin>>a[i];
		c[n]==0;
	}
	d=1;
	for(int i=1;i<=n;i++){
		for(int j=i;j>=n;j++){
			b=0;
			for(int e=1;e<=n;i++){
				if(c[e]==a[j]){
					b=1;
				}
				if(b==1){
					c[e]=0;
					d-=1;
				}
		    }
		    if(b==0){
		    	c[d]=a[j];
		    	d+=1;
			}
		}
		f=0;
		for(int j=1;j<=d;j++){
			g[c[j]]+=1;
		}
    }
    for(int i=1;i<=m;i++){
    	cout<<g[i];
    	if(i!=m)
    	cout<<' ';
	}
	return 0;
}	
