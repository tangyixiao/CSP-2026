#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m,maxn=0,q=0,k=0;
	long long a[200005];
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		maxn=max(a[i],maxn);
	} 
	for(q=1;q<=maxn;q*=2){}
	q/=2;
	for(int i=q;i>=1;i/=2){
		long long y=0;
		for(int j=1;j<=n;j++){
			if(a[j]>=i){
				y++;
			}
		}
		if(y>=m){
			for(int j=1;j<=n;j++){
				if(a[j]<i) a[j]=0;
				else a[j]-=i;
			}
			k+=i;
		}
		
	}
	cout<<k;
	return 0;
} 
