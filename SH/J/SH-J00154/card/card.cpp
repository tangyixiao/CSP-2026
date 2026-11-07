#include<bits/stdc++.h>
using namespace std;
const int N=500009;
int stk[N],cnt[N],s[N],a[N],b[N],ans[N],c[N],n,m,k1;
bool isCondition(){
	for(int i=1;i<=n-1;i++)
		if(a[i]>a[i+1]) return 0;
	return 1;
}
bool isCondition2(){
	int cnt=0;
	for(int i=1;i<=n-1;i++) cnt+=(a[i]!=a[i+1]);
	return cnt<=4999;
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i],s[a[i]]++;
	if(m==2){
		if(a[n]==2) cout<<s[1]<<' '<<n<<'\n';
		else cout<<n<<' '<<s[2]<<'\n';
		return 0;
	}
	else if(isCondition()){
		for(int i=1;i<=n;i++) ans[a[i]]=max(ans[a[i]],i);
		for(int i=1;i<=m;i++) cout<<ans[i]<<' ';
		cout<<'\n';
		return 0;
	}
	else if(isCondition2()){
		for(int i=1;i<=n;i++){
			if(a[i]!=a[i-1]) b[++k1]=a[i];
			c[k1]++;
		}
		for(int i=1;i<=k1;i++){
			int t=0;
			for(int j=i;j<=k1;j++){
				cnt[b[j]]++;
				stk[++t]=b[j];
				if(cnt[b[j]]==1) continue;
				for(int k=t-1;k;k--){
					cnt[stk[k]]--;
					if(stk[k]==b[j]){t=k;break;}
				}
			}
			for(int j=1;j<=t;j++) ans[stk[j]]+=c[i],cnt[stk[j]]=0;
		}
		for(int i=1;i<=m;i++) cout<<ans[i]<<' ';
		cout<<'\n';
		return 0;
	}
	for(int i=1;i<=n;i++){
		if(a[i]!=a[i-1]) b[++k1]=a[i];
		c[k1]++;
	}
	for(int i=1;i<=k1;i++){
		int t=0;
		for(int j=i;j<=k1;j++){
			cnt[b[j]]++;
			stk[++t]=b[j];
			if(cnt[b[j]]==1) continue;
			for(int k=t-1;k;k--){
				cnt[stk[k]]--;
				if(stk[k]==b[j]){t=k;break;}
			}
		}
		for(int j=1;j<=t;j++) ans[stk[j]]+=c[i],cnt[stk[j]]=0;
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<' ';
	cout<<'\n';
	return 0;
}
