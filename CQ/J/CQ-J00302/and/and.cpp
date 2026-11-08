#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	bool A=true;
	long long m,n;
	cin>>n>>m;
    long long a[200005];
	for(long long i=1;i<=n;i++){
	    cin>>a[i];
	    bool now_A=true;
	    for(long long j=1;j<=a[i]+1;j*=2){
	    	if(a[i]==j-1){
	    		now_A=false;
			}
		}
		if(now_A){A=false;}
	}
	long long maxx=-1;
	if(m==1){
		long long maxx=-1;
	    for(long long i=1;i<=n;i++){
		    if(a[i]>maxx){
			    maxx=a[i];
		    }
	    }
	    cout<<maxx;
	}
	else if(m==n){
		int num=a[1];
		for(int i=2;i<=n;i++){
			num=(num&a[i]);
		}
		cout<<num;
	}
	else if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(i!=j && a[i]&a[j]>maxx){
					maxx=a[i]&a[j];
				}
			}
		}
		cout<<maxx;
	}
	else if(m==(n-1)){
		for(int i=1;i<=n;i++){
			int now=1048575;
			for(int j=1;j<=n;j++){
				if(i!=j){
					now=(now&a[j]);
				}
			}
			if(now>maxx){
				maxx=now;
			}
		}
		cout<<maxx;
	}else if(A){
		sort(a+1,a+n+1);
		cout<<a[1];
	}else{
		sort(a+1,a+n+1);
		int k;
		for(k=1;k<=a[n];k*=2){}
		for(int i=1;i<=n-m;i++){k/=2;}
		cout<<k-1;
	}
	return 0;
} 
