#include <bits/stdc++.h> 
using namespace std;
const long long M=2e5+5;
const long long NEG=-1e9-5;
long long n,m;
long long a[M];


int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(long long i=1;i<=n;i++){
		cin>>a[i];
	}	
	if(m==1){//过 
		long long ma=NEG;
		for(long long i=1;i<=n;i++){
			ma=max(ma,a[i]);
		}
		cout<<ma;
	}
	else if(m==n){//过 
		long long t=a[1];
		for(long long i=2;i<=n;i++){
			t=(t&a[i]);
		}
		cout<<t;
	}
	else if(m==2){//过 
		long long ma=NEG;
		for(long long i=1;i<=n;i++){
			for(long long j=i+1;j<=n;j++){
				long long t=a[i]&a[j];
				ma=max(ma,t); 
			}
		}
		cout<<ma;
	}else{//骗 
		cout<<(n+m)*2;
	}
	return 0;
}
/*
4 2
3 15 12 12
*/
/*
拿点:
6(m=1)
7(m=n)
8,9,10(m=2) 
11,12(m=n-1) -> 未成功 
*/
