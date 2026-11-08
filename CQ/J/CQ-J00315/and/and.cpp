#include<bits/stdc++.h>
using namespace std;
long long n,m;
long long a[200005];
long long ans[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	cin >> a[1];
	long long maxn=a[1];
	long long minn=a[1];
	long long sum=a[1];
	long long f=0;
	for(long long i=2;i<=n;i++){
		cin >> a[i];
		maxn=max(maxn,a[i]);
		minn=min(minn,a[i]);
		sum=(sum&a[i]);
		if(a[i]!=i-1){
			f=1;
		} 
	}
	if(m==1){
		cout << maxn;
		return 0;
	}
	else if(m==n){
		cout << sum;
		return 0;
	}
	else if(m==2){
		long long maxn=-1;
		for(long long i=1;i<=n;i++){
			for(long long j=1;j<=n;j++){
				if(i!=j){
					maxn=max(maxn,a[i]&a[j]);
				}				
			}
		}
		cout << maxn;
		return 0;
	}
	else if(m==n-1){
		sort(a+1,a+1+n);
		long long ooo=a[2];
		for(long long i=3;i<=n;i++){
			ooo=(ooo&a[i]);
		}
		cout << ooo;
		return 0;
	}
	else if(f==0){
		long long hhh=a[n];
		for(long long i=n-1;i>=n-m;i--){
			hhh=(hhh&a[i]);
		}
		cout << hhh;
		return 0;
	}
	else{
		sort(a+1,a+1+n);
		cout << a[n-m+1];
		return 0;
	}
	return 0;
}
