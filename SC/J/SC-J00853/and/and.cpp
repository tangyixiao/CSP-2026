#include<bits/stdc++.h>
using namespace std;
long long a[200000];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin.tie(0);
	long long n,m;
	long long maxa=0,mina=100000000;
	cin>>n>>m;
	for(long long i=0;i<n;i++){
		cin>>a[i];
		if(a[i]>=maxa)maxa=a[i];
		if(a[i]<=mina)mina=a[i];
	}
	if(m==1){
		cout<<maxa;
	}
	else if(m==n){
		for(long long i=1;i<n;i++){
			a[0]&=a[i];
		}
		cout<<a[0];
	}
	else if(m==2){
		long long max1=0;
		for(long long i=0;i<n-1;i++){
			for(long long j=i+1;j<n;j++){
				if((a[i]&a[j])>=max1)max1=(a[i]&a[j]);
			}
		}
		cout<<max1;
	}
	else{
		cout<<mina;
	}
	return 0;
} 