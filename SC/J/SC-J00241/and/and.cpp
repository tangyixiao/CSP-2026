#include<bits/stdc++.h>
using namespace std;
long long n,m;
long long a[210010],lg[200010],h[200010][35];
long long dg[35],cl[200100];
vector<long long> tp[35];
bitset<200010> bt[35];
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(long long i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	if(m==2){
		long long ma=0;
		sort(a+1,a+n+1);
		for(int i=n;i>=1;i--){
			for(int j=1;j<=350;j++){
			//	if(int(log2(a[i]))==int(log2(a[i-j]))){
					ma=max(ma,(a[i]&a[i-j]));
			//	}
			}
		}
		cout<<ma;
		return 0;
	}
	for(long long j=0;j<=31;j++){
		for(long long i=1;i<=n;i++){
			h[i][j]=(a[i]>>j)%2;
		}
	}
	for(long long j=31;j>=0;j--){
		for(long long i=n;i>=1;i--){
			dg[j]+=h[i][j];
		}
	}
	long long id=-1;
	for(long long i=31;i>=0;i--){
		if(dg[i]>=m){
			for(long long j=1;j<=n;j++){
				if(h[j][i]==1){
					tp[i].push_back(a[j]);
					bt[i][j]=1;
				}
			}
			id=max(id,i);
		}
	}
	if(id==-1){
		cout<<0;
		return 0;
	}
	long long ans=0;
	long long t=id;
	for(long long j=id;j>=0;j--){
		if((bt[t]|bt[j])==bt[j]){
			ans+=(1<<j);
			bt[t]=bt[j];
			t=j;
		}
	}
	cout<<ans;
	return 0;
}