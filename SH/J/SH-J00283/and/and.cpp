#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,ma,a[200010],sum[200010],cnt[200010];
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		ma=max(ma,a[i]);
//		for(int j=0;j<=30;j++)if((a[i]>>j)&1)cnt[i][j]++,vec[j].push_back(i),sum[j]++;
	}
	if(m==1){
		cout<<ma;
		return 0;
	}
	if(ma<1024&&n>20000){
		for(int i=1;i<=n;i++)sum[a[i]]++;
		for(int i=1023;i>=0;i--){
			if(sum[i]>=m){
				cout<<i;
				return 0;
			}
		}
	}
	if(m==2){
		ma=0;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(i==j)continue;
				ma=max(ma,a[i]&a[j]);
			}
		}
		cout<<ma;
		return 0;
	}
	if(m==n){
		ma=a[1];
		for(int i=2;i<=n;i++){
			ma&=a[i];
		}
		cout<<ma;
		return 0;
	}
	if(m==n-1){
		for(int i=1;i<=n;i++){
			for(int j=0;j<=20;j++)if((a[i]>>j)&1)cnt[j]++,sum[j]++;
		}
		int ans=0,mi=INT_MAX,id=0;
		for(int i=1;i<=n;i++){
			ans=0;
			for(int j=0;j<=20;j++){
				if(((a[i]>>j)&1)&&cnt[j]==n-1)ans+=(1<<j);
			}
			if(ans<mi){
				mi=ans;
				id=i;
			}
		}
		ans=(1<<20)-1;
		for(int i=1;i<=n;i++){
			if(i!=id)ans&=a[i];
		}
		cout<<ans;
		return 0;
	}
	if(n<=20){
		int ma=0;
		for(int i=0;i<(1<<n);i++){
			int ans=(1<<n)-1,sum=0;
			for(int j=0;j<=(n-1);j++){
				if(i>>j&1)sum++,ans&=a[j+1];
			}
			if(sum==m){
				ma=max(ma,ans);
			}
		}
		cout<<ma;
		return 0;
	}
	sort(a+1,a+1+n);
	ma=a[n];
	for(int i=n-1;i>=n-m+1;i--){
		ma&=a[i];
	}
	cout<<ma;
//	for(int i=30;i>=0;i--){
//		if(sum[j]<m)continue;
//		
//		for(int j=i-1;j>=0;j--){
//			
//		}
//	}
	return 0;
}
