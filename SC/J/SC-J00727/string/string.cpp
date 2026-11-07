#include <bits/stdc++.h>
using namespace std;
string ans[10000000];
long long arr[10000000];

int main(){
	long long n,s=0;
	cin>>n;
	for (int i=1;i<=n;i++){
		cin>>arr[i]>>ans[i];
		s+=arr[i];	
	}
	long long flag=1,k=0,h=1;
	for (long long i=1;i<=n;i++){
		for(long long j=h;j<=h+arr[i]-1;j++){
			if(ans[j]!=ans[n-1+arr[j]]){
				flag=0;
				k+=1;
			}	
			s-=1;
		}
		h+=arr[i];
	}
	if(flag==1){
		cout<<"0";
	}
	else{
		cout<<k/2;
	}
	return 0;
}