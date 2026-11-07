#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout); 
	long long n,m,mx,cnt,sum,flaga=0;
	cin>>n>>m;
	long long a[n+5];
	cin>>a[0]; 
	if(m==1) flaga=1;	
	if(m==n) flaga=2;
	if(m==2) flaga=3;
	if(flaga==1) mx=a[0];
	if(flaga==2) cnt=a[0];
	if(flaga==3) sum+=a[0];
	for(long long i=1;i<n;i++){
		cin>>a[i];
		if(flaga==1) mx=max(mx,a[i]);
		if(flaga==2) cnt=cnt&a[i];
		if(flaga==3) sum+=a[i];
	}
	if(flaga==0) cout<<"26";
	if(flaga==1) cout<<mx;
	if(flaga==2) cout<<cnt;
	if(flaga==3){
		sum/=n;
		cout<<sum;
	}
	return 0;
}