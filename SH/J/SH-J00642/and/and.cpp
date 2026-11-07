#include <bits/stdc++.h>
using namespace std;
long long n,m,max_=0;
long long a[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(long long i=0;i<n;i++){
		cin>>a[i];
	}
	if(m==2){
		for(long long i=0;i<n;i++){
			for(long long j=i+1;j<n;j++){
				max_=max(max_,a[i]&a[j]);
			}
		}
	}else if(m==1){		
		for(long long i=0;i<n;i++){
			max_=max(max_,a[i]);
		}
	}else if(m==n){
		max_=a[0];
		for(long long i=1;i<n;i++){
			max_&=a[i];
		}
	}else if(m==n-1){
		for(long long i=0;i<n;i++){
			max_=a[0];
			for(long long j=1;j<n;j++){
				if(j!=i) max_&=a[i];
			}
		}
	}else if(m==3){
		for(long long i=0;i<n;i++){
			for(long long j=i+1;j<n;j++){
				for(long long k=j+1;k<n;k++){
					max_=max(max_,a[i]&a[j]&a[k]);
				} 
				
			}
		}
	}else if(n>2000){
		max_=2000005;
		for(long long i=0;i<n;i++){
			max_=min(max_,a[i]);
		}
	}
	
	cout<<max_<<endl;
	return 0;
} 
