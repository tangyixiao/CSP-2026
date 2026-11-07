#include<bits/stdc++.h>
using namespace std;
long long n=0,m=0,k=1,l=0,t=1,r=0,f=1;
long long a[500010],b[500010],c[500010],d[500010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(long long i=1;i<=n;i++){
		cin>>a[i];
		d[a[i]]++;
	}
	for(long long i=1;i<=n;i++){
		for(long long j=i+1;j<=n;j++){
			if(a[i]==a[j]){
				f=0;
				break;
			}
		}
	}
	if(f==1){
		for(long long i=1;i<=n;i++){
			for(long long j=i;j<=n;j++){
				c[j]++;
			}
		}
		for(long long i=1;i<=n;i++){
		    if(d[i]!=0){
		    	cout<<c[i]<<" ";
	    	}
	    }
	    return 0;
	}
	for(long long i=1;i<=n;i++){
		k=1;
		for(long long j=i;j<=n;j++){
			b[k]=a[j];
			k++;
			l=0;
			for(long long p=1;p<=k-1;p++){
				if(b[p]==b[k]){
					l=p;
					break;
				}
			}
			if(l!=0){
				for(long long p=l+1;p<=n;p++){
				    b[p]=0;
			    }
			}
		}
		while(b[t]!=0){
			t++;
		}
		for(long long j=1;j<=t;j++){
			c[b[j]]++;
		}
	}
	for(long long i=1;i<=n;i++){
		if(d[i]!=0){
			cout<<c[i]<<" ";
		}
	}
	return 0;
} 