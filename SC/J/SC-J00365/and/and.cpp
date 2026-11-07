#include<bits/stdc++.h>
using namespace std;
long long a[200002],n,m,b[200002];
bool mp[200002][33];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;++i){
		cin>>a[i];
		int x=a[i],idx=0;
		while(x){
			mp[i][++idx]=x%2;
			x/=2;
		}
		b[i]=i;
	}
	int idx=n;
	long long ans=0;
	for(int k=31;k>=1;--k){
		int cnt=0;
		for(int i=1;i<=idx;++i){
			if(mp[b[i]][k]) ++cnt;
		}
		if(cnt>=m){
			cnt=0;
			for(int i=1;i<=idx;++i){
				if(mp[b[i]][k]) b[++cnt]=b[i];
			}
			idx=cnt;
			ans+=pow(2,k-1);
		}
	}
	cout<<ans;
	return 0;
}