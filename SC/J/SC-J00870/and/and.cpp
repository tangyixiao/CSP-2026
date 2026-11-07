#include<bits/stdc++.h>
using namespace std;
long long m,n;
const int N=2e5+5;
long long a[N];
long long cnt[N];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	
	if(m==1){//
		long long max_n=0;
		for(int i=1;i<=n;i++){
			if(a[i]>max_n) max_n=a[i];
		}
		cout<<max_n;
		return 0;
	}
	
	else if(n==m){//
		long long suM=a[1];
		for(int i=2;i<=n;i++){
			suM=a[i]&suM;
		}
		cout<<suM;
		return 0;
	}
	
	else if(m==(n-1)){//
		long long Max_sum=0,Sum;
		for(int i=1;i<=n;i++){
			if(i==1) Sum=a[2];
			else Sum=a[1];
			for(int j=1;j<=n;j++){
				if(j!=i){
					Sum&=a[j];
				}
			}
			if(Sum>=Max_sum) Max_sum=Sum;
		}
		cout<<Max_sum;
		return 0;
	}
	
	else if(m==2){//
		long long max_sum=0;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(j!=i){
					long long sum=a[i]&a[j];
					if(sum>=max_sum) max_sum=sum;
				}
			}
		}
		cout<<max_sum;
		return 0;
	}
	else if(m==3){//
		long long mAx_sum=0;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				for(int k=1;k<=n;k++){
					if(j!=i&&i!=k&&k!=j){
						long long sUm=a[i]&a[j]&a[k];
						if(sUm>=mAx_sum) mAx_sum=sUm;
					}
				}
				
			}
		}
		cout<<mAx_sum;
		return 0;
	}
	return 0;
} 