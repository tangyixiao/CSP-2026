#include <bits/stdc++.h>
using namespace std;
long long a[10000005];
int main(){
	long long n,m;
	cin>>n>>m;
	for(long long i=0; i<n; i++){
		cin>>a[i];
	}
	if(m==1){
		long long max1=0;
		for(int i=0; i<n; i++){
			if(a[i]>max1) max1=a[i];
		}
		cout<<max1;
	
	}
	
	else if(m==n){
		long long ans1=a[0];
		for(int i=1; i<n; i++){
			ans1=ans1 & a[i];
		
		}
		cout<<ans1;
	}
	
	else if(m==n-1){
		long long ans2=a[1];
		long long res=0;
		for(int i=2; i<n; i++){
			ans2=ans2 & a[i];
		}
		res=ans2;
		ans2=a[0];
		for(int i=1; i<n; i++){
			for(int j=1; j<n; j++){
				if(j!=i){
					ans2=ans2 & a[i];
				}
				if(ans2>res){
					res=ans2;
					ans2=a[0];
				}
			}
		}
		
		cout<<res;
	}
	
	
	else if(m==2){
		long long x=0,y=1;
		long long ans3,res1=0;
		
		while(x<n-1 && y<n){
			ans3=a[x] & a[y];
			if(ans3>res1){
				res1=ans3;
				ans3=0;
				
			}
			if(y==n-1){
				x++;
				y=x+1;
			}else{
				y++;
			}	
		}
		cout<<res1;	
	}
	return 0;
}
