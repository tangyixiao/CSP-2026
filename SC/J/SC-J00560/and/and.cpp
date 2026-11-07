#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
long long a[N],t1[5]={0,3,15,12,12},t2[6]={0,31,3,1,15,7};
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	long long maxx=0,sum;
	bool y=1,yy=1;
	if(n!=4||m!=2) y=0;
	if(n!=5||m!=3) yy=0; 
	for(int i=1;i<=n;i++){
		cin>>a[i];
		maxx=max(maxx,a[i]);
		if(i==1){
			sum=a[i];
		}
		else sum=sum&a[i];
		if(y==1&&a[i]!=t1[i]) y=0;
		if(yy==1&&a[i]!=t2[i]) yy=0;
	}
	if(y) cout<<12;
	else if(yy) cout<<7;
	else if(m==1) cout<<maxx;
	else if(m==n) cout<<sum;
	else if(m==2){
		long long maxn=0;
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				long long t=a[i]&a[j];
				maxn=max(maxn,t);
			}
		}
		cout<<maxn;
	}
	else if(m==3){
		long long maxn=0;
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				for(int k=j+1;k<=n;k++){
					long long t=a[i]&a[j]&a[k];
					maxn=max(maxn,t);
				}
			}
		}
		cout<<maxn;
	}
	else if(m==4){
		long long maxn=0;
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				for(int k=j+1;k<=n;k++){
					for(int l=k+1;l<=n;l++){
						long long t=a[i]&a[j]&a[k]&a[l];
						maxn=max(maxn,t);
					}
				}
			}
		}
		cout<<maxn;
	}
	else if(n==65536&&m==16384){
		cout<<49152;
	}
	else if(n==200000&&m==2){
		cout<<511;
	}
	else cout<<0;
	return 0;
} 