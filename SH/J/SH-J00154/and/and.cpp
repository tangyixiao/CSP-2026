#include<bits/stdc++.h>
using namespace std;
const int N=200009;
int x[30][N],cnt[N],tmp[N],a[N],ok[N],n,m,p,ans;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++){
		for(int j=0;j<30;j++)
			if((a[i]>>j)&1) x[j][i]=1,cnt[j]++;
	}
	for(int i=0;i<=29;i++)
		if(cnt[i]>=m) p=i,ans=(1<<p);
	ok[p]=1;
	for(int i=p-1;i>=0;i--){
		if(cnt[i]<m) continue;
		int s=0;ok[i]=1;
		for(int k=1;k<=n;k++){
			int flag=0;
			for(int j=i;j<=p;j++)
				if(ok[j]&&x[j][k]!=1){flag=1;break;}
			if(flag==0) s++;
		}
		if(s>=m) ans^=(1<<i);
		else ok[i]=0;
	}
	cout<<ans<<'\n';
	return 0;
} 
