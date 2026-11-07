#include<bits/stdc++.h>
using namespace std;
long long a[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m;
	cin>>n>>m;
	long long ans1=-1;
	for(long long i=1;i<=n;i++){
		cin>>a[i];
		ans1=max(ans1,a[i]);
	}
	long long ans2=a[1];
	for(long long i=2;i<=n;i++){
		ans2=(ans2&a[i]);
	}
	if(m==1){
		cout<<ans1;
		return 0;
	}
	if(m==n){
		cout<<ans2;
		return 0;
	}
	if(m==2){
		long long ans3=-1;
		for(long long i=1;i<=n;i++){
			for(long long j=1;j<=n;j++){
				if(i!=j){
					ans3=max(ans3,(a[i]&a[j]));
				}
			}
		}
		cout<<ans3;
		return 0;
	}
	if(m==n-1){
		long long ans4=-1;
	    for(long long i=1;i<=n;i++){
	    	long long ans41;
		    long long x=a[1],y=a[i+1];
		    for(long long j=2;j<i;j++){
		    	x=(x&a[j]);
		    }
		    for(long long j=i+2;j<=n;j++){
		    	y=(y&a[j]);
		    }
		    if(i==1)ans41=y;
		    else if(i==n)ans41=x;
		    else ans41=(x&y);
		    ans4=max(ans4,ans41);
		}
		cout<<ans4;
		return 0;
	}
	return 0;
}