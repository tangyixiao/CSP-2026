#include<bits/stdc++.h>
using namespace std;
long long n,m,l,r,ans;
long long a[200005];
bool check(long long x){
	long long cnt=0;
	for(int i=1;i<=n;i++){
		if((a[i]&x)>=x){
			cnt++;
		}
	}
	if(cnt>=m){
		return 1;
	}else{
		return 0;
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		r=max(r,a[i]);
	}
	l=a[1];
	for(int i=1;i<=n;i++){
		l=(l&a[i]);
	}
	if(m==1){
		cout<<r;
		return 0;
	}
	if(m==n){
		cout<<l;
		return 0;
	}
	if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=1;j<i;j++){
				ans=max(ans,(a[i]&a[j]));
			}
		}
		cout<<ans;
		return 0;
	}
	if(r<=(1<<20)&&r>4){
		bool f=0;
		for(int i=1;i<=n;i++){
			if(a[i]!=i-1){
				f=1;
			}
		}
		if(f==0){
			for(long long i=r;i>=l;i--){
				if(check(i)){
					cout<<i;
					return 0;
				}
			}
		}else{
			sort(a+1,a+n+1);
			ans=a[n];
			for(int i=n;i>=n-m+1;i--){
				ans=(ans&a[i]);
			}
			cout<<ans;
			return 0;
		}
	}
	for(long long i=r;i>=l;i--){
		if(check(i)){
			cout<<i;
			return 0;
		}
	}
	return 0;
}