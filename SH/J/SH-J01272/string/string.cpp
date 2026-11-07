#include <bits/stdc++.h>
using namespace std;
char a[10000005];
char b[10000005];
long long c[10000000];
int main(){
	int n;
	long long sum=0,cnt=0,x=0;
	cin>>n;
	for(long long i=0; i<n; i++){
		cin>>c[i];
		cin>>b[i];
		
		 
	}
	
	
	for(long long i=0; i<n; i++){
		
		for(long long j=0; j<c[i]; j++){
			a[x+j]=b[i];
			
			
		}
		x+=c[i];
	}
	
	
	for(long long i=0; i<n; i++){
		sum+=c[i];
	}
	
	
		
	for(long long i=0; i<sum/2; i++){
		if(a[i] != a[sum-i-1]){
			cnt++;
		}
	}
	
	cout<<cnt;
	
	return 0;
}
