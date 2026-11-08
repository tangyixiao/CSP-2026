#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
long long n,m,a[N],maxn,sum,ans,k[40],minn=1e18;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		maxn=max(maxn,a[i]);
		minn=min(minn,a[i]);
		if(i==1) ans=a[i];
		else ans=(ans&a[i]);
	}
	sort(a+1,a+1+n);
	if(m==1) cout<<maxn;
	else if(minn==1) cout<<1;
	else if(m==n) cout<<ans;
	else if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(j==i) continue;
				sum=max(sum,a[i]&a[j]);
			}
		}
		cout<<sum;
	}
	else if(m==n-1){
		for(int i=2;i<=n;i++) 
			if(i==2) sum=a[i];
			else sum=sum&a[i];
	}
	else{
		for(int i=1;i<=31;i++){
			for(int j=1;j<=n;j++){
				if((a[j]&(1<<i))!=0){
					k[i]++;
				}
			}
		}
		for(int i=1;i<=31;i++) if(k[i]>=m) ans+=(1<<i);	
		cout<<ans;
	}	
	return 0;
}
