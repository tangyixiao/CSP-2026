#include<bits/stdc++.h>
using namespace std;
const int MAXN=2e5+5;
int a[MAXN],dp[MAXN];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,ma;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(i==1)ma=a[i];
		else if(ma<a[i])ma=a[i];
	}
	if(m==1){
		cout<<ma;
		return 0;
	}
	else if(m==n){
		int ans=a[1];
		for(int i=2;i<=n;i++)ans=ans&a[i];
		cout<<ans;
		return 0;
	}
	else if(m==2){
		int maa=0;
		for(int i=1;i<n;i++){
			for(int j=i+1;j<=n;j++){
				if((a[i]&a[j])>=maa)maa=a[i]&a[j];
			}
		}
		cout<<maa;
		return 0;
	}
	else if(m==n-1){
		int mam=0;
		for(int i=1;i<=n;i++){
			int pt=a[1];
			for(int j=2;j<=n;j++){
				if(i==1&&j==2){
					pt==a[2];
					continue;
				}
				if(j==i)continue;
				pt=pt&a[j];
			}
			if(pt>mam)mam=pt;
		}
		cout<<mam;
		return 0;
	}

	int mans=0;
	for(int i=1;i<(1<<n);i++){
		int cnt=0,pans=1,ii;
		ii=i;
		while(ii!=0){
			if(ii%2==1)cnt++;
			ii/=2;
		}
		if(cnt!=m)continue;
		ii=i;
		for(int j=1;j<=n;j++){
			if(ii%2==1){
				ii/=2;
				pans=pans&a[j];
			}
			ii/=2;
		}
		if(pans>mans&&pans!=1)mans=pans;
	}
	cout<<mans;
	return 0;
}
