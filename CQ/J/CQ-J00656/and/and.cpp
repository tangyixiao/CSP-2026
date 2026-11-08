#include<bits/stdc++.h>
#define tin long long
using namespace std;
tin n,m,k,ans,a[200005],t[35];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(tin i=1;i<=n;i++){
		cin>>a[i];
		tin tmp=a[i],cnt=0;
		while(tmp) tmp/=2,cnt++;
		k=max(k,cnt);
	}
	for(tin p=k;p>=1;p--){
		memset(t,0,sizeof(t));
		for(tin i=1;i<=n;i++)
			for(tin j=p-1;j>=0;j--){
				if((a[i]>>j)&1) t[p-j]++;
				else break;
			}
		tin now=0;
		for(tin i=1;i<=p;i++)
			if(t[i]>=m) now+=(1ll<<(p-i));
		ans=max(ans,now);
		if(now) break;
	}cout<<ans;
	return 0;
}
