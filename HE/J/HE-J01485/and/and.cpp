#include<bits/stdc++.h>
using namespace std;
long long n,a[200000],r;
long long sum=0,ma=0;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>r;
	for(long long i=0;i<n;i++){
		cin>>a[i];
	}
	for(long long i=0;i<n;i++){
		for(long long j=0;j<r;j++){
			sum=a[i]&a[i+1];
		}
		if(sum>ma){
			ma=sum;
		}
	}
	cout<<ma;
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
