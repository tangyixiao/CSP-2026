#include<bits/stdc++.h>
using namespace std;
const long long N=1e6;
long long n,m;
long long a[N];
bool vis[N];
long long cnt[45]; 
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin>>n>>m;
	for(long long i=1;i<=n;i++){
		long long temp;
		cin>>temp;
		a[i]=temp;
		long long j=1;
		while(temp>0){
			if(temp%2==1)cnt[j]++;
			temp>>=1;
			j++;
		} 
	}
	long long ans=0;
	for(long long i=35;i>=1;i--){
		if(cnt[i]<m)continue;
		for(long long j=1;j<=n;j++){//淘汰掉第i位上不为1的数 
			if(vis[j]==1)continue;
			
			if((a[j] & (1<<(i-1)))==0){

				vis[j]=1;
				for(long long k=35;k>=1;k--){
					
					if((a[j] & (1<<(k-1)))!=0)cnt[k]--;

				}
			}
		}
		ans+=(1<<(i-1));
	}
	cout<<ans;
	return 0;
} 
