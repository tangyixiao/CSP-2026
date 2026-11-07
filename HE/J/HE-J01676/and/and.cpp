#include<bits/stdc++.h>
using namespace std;
int n,m,cnt=0,xi[1002],xj[1002];
long long a[2000005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	long long maxn=-1;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		maxn=max(maxn,a[i]);
	}
	if(m==1){
		cout<<maxn;
	}
	if(m==2&&n<2501){
		while(m){
			maxn=0;
			for(int i=1;i<=n;i++){
				for(int j=1;j<=n;j++){
					if(i!=j&&maxn>a[i]&a[j]){
						maxn=a[i]&a[j];
						 xi[cnt]=i;
						 xj[cnt]=j;
						cnt++;
					}
				}
			}
			m--;
		}
		cout<<maxn;
		return 0;
	}
	if(m==n){
		int sum=a[1];
		for(int i=2;i<=n;i++){
			sum=sum&a[i];
		} 
		cout<<sum;
	}
	return 0;
}
