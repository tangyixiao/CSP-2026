#include<bits/stdc++.h>
using namespace std;
int n,m;
long long a[200005];
int b[200005][32];
long long ds[200005],vis[200005]={0};
long long cnt[200005]={0};
vector<long long> hm[200005];
map<long long,bool> hn[200005];
bool ok[200005];
long long maxn2; 
int main(){
	freopen("and.in","r",stdin);freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		long long t=1;
		long long j;
		for(j=0;j<=31;j++){
			if(a[i]<t){
				break;
			}
			t*=2;
		}
		maxn2=max(maxn2,j);
	}
	long long t=pow(2,maxn2);
	for(int i=1;i<=n;i++){
		long long now=t;
		for(int j=maxn2;j>=0;j--){
			if(now<=a[i]){
				b[i][j]=1;
				a[i]-=now;
			}else{
				b[i][j]=0;
			}
			now/=2;
		}
	}
	for(int j=maxn2;j>=0;j--){
		for(int i=1;i<=n;i++){
			if(b[i][j]==1){
				cnt[j]++;
				hm[j].push_back(i);
				hn[j][i]=1;
			}
		}
	}
	int ans=0;
	memset(ok,1,sizeof(ok));
	for(int j=maxn2;j>=0;j--){
		bool flag=1;
		int now=cnt[j];
		if(cnt[j]>=m){
			for(int i=0;i<hm[j].size();i++){
				if(!ok[hm[j][i]])now--;
			}
			for(int i=1;i<=n;i++){
				if(!hn[j][i])ok[i]=0;
			}
		}
		if(now>=m)ans+=pow(2,j);
	}
	cout<<ans;
	return 0; 
}
