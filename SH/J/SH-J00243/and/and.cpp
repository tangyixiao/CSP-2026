#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long m,n;
	cin>>n>>m;
	vector<long long> a(n);
	
	for(long long i=0;i<n;i++){
		cin>>a[i];
		
		
	}
	long long max_=0;

	if(m==2){
		for(int i=0;i<n-1;i++){
		    for(int j=i+1;j<n;j++){
		    	
			    int b=a[i]&a[j];
				
			    if(max_<b){
					max_=b;
					
				}
			}
		
		
		}
	}
	else if(m==1){
		for(long long i=0;i<n;i++){
			if(max_<a[i]){
				max_=a[i];
			}
		}
	}
	else if(m==n){
		long long h=a[0];
		for(long long i=1;i<n;i++){
			h=h&a[i];
		}
		max_=h;
	}
	else if(m==n-1){
		
		for(long long i=0;i<n;i++){
			long long h=2*2*2*2*2*2*2*2*2*2*2*2*2*2*2*2*2*2*2*2*2-1;
			for(long long j=0;j<n;j++){
				if(j!=i){
					h=h&a[j]; 
				}
			}
			if(max_<h){
				max_=h;
			}
		}
	}
	
	cout<<max_;
	return 0;
}
