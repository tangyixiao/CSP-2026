#include<bits/stdc++.h> 
using namespace std;
long long a[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m;
	cin>>n>>m;
	for(long long i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==1){
		long long mx=0;
		for(long long i=1;i<=n;i++){
			mx=max(mx,a[i]);
		}
		cout<<mx;
	}
	else if(m==n){
		long long s=a[1];
		for(long long i=2;i<=n;i++){
			s&=a[i];
		}
		cout<<s;
	}
	else if(m==2){
		long long mxx=0;
		for(long long i=1;i<=n;i++){
			for(long long j=i+1;j<=n;j++){
				mxx=max(mxx,a[i]&a[j]);
			}
		}
		cout<<mxx;
	}
	else cout<<0;
	return 0;
} 