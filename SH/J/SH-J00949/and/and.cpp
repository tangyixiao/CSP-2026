#include<bits/stdc++.h>
using namespace std;

long long n,a[200005],m,ans,bans;
long long s[200005];

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin.tie(0);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	if(n==m){
		long long nnmm=a[0];
		for(int i=0;i<n;i++){
			nnmm&=a[i];
		}
		cout<<nnmm;
	}
	else if(m==1){
		long long ma=-2e9;
		for(int i=0;i<n;i++){
			if(a[i]>ma)ma=a[i];
		}
		cout<<ma;
	}
	else if(m==2){
		long long ma=-2e9;
		
		for(long long i=0;i<n;i++){
			for(long long j=0;j<i;j++){
				if((a[i]&a[j])>ma)ma=a[i]&a[j];
			}
		}
		cout<<ma;
	}
	else if(m==n-1){
		long long ls[200005],mx=-2e9;
		for(int i=0;i<n;i++){
			ls[i]=a[i];
		}
		for(int i=0;i<n;i++){
			ls[i]=1111111;
			long long mn1=ls[0];
			for(int j=0;j<n;j++){
				long long sum=(mn1&ls[j]);
			}
			if(mn1>mx&&mn1!=1111111){
			mx=mn1;
			
			}
			ls[i]=a[i];
		}
		cout<<mx;
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
//陈老师保佑我考>=2 
