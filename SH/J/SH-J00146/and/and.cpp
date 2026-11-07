#include<bits/stdc++.h>
using namespace std;
long long max(long long a,long long b){
	if(a>=b)return a;
	return b;
}
long long andd(long long m,long long n,long long m1,long long *a,long long cnt){
	long long maxx=0,flag=0;
	if(m==0)return INT_MAX;
	for(long long i=cnt;i<n;i++){
		if(m1==m){
			for(long long j=cnt;j<n;j++)maxx=max(maxx,a[i]&andd(m,n,m1-1,a,cnt+1));
			flag=1;
		}
		else for(long long j=cnt;j<n;j++)return a[j]&andd(m,n,m1-1,a,cnt+1);
	}
	if(flag)return maxx;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m;
	cin>>n>>m;
	long long a[n];
	for(int i=0;i<n;i++)cin>>a[i];
	sort(a,a+n); 
	if(m==1)cout<<a[n-1];
	else if(m==2){
		long long maxx=0;
		for(long long i=0;i<n;i++){
			for(long long j=i+1;j<n;j++){
				maxx=max(maxx,a[i]&a[j]);
			}
		}
		cout<<maxx;
	}
	else if(m==n){
		long long cnt=a[0];
		for(long long i=1;i<n;i++){
			cnt&=a[i];
		}
		cout<<cnt;
	}
	else cout<<andd(m,n,m,a,0);
	return 0;
}
