#include<bits/stdc++.h>
using namespace std;
const int N=5e5+10;
int a[N];
int ans[N];
int cnt[N];
int lst[N];
bool has[N];
int lx[N];//连续数量
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	int n,m;cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(is_sorted(a+1,a+n+1)){
		for(int i=1;i<=n;i++) if(a[i]!=a[i+1])ans[a[i]]+=i;
	}
	else {
		int c=0;
		for(int i=1;i<=n;i++){
			if(a[i]!=a[i-1]){
				a[++c]=a[i];
			}
			lx[c]++;
		}
		n=c;
		if(m>2||n<6000) for(int i=1;i<=n;i++){
			memset(cnt,0,sizeof(cnt));
			memset(has,0,sizeof(has));
			for(int j=i;j<=n;j++){
				if(cnt[a[j]]>0){
					for(int k=lst[a[j]];k<j;k++){
						if(has[k]) cnt[a[k]]--,has[k]=0;
					}
				}
				lst[a[j]]=j;
				cnt[a[j]]++;
				has[j]=1;
			}
			for(int j=1;j<=m;j++) ans[j]+=cnt[j]*lx[i];
		}
		else if(n%2==0)
			for(int i=1;i<=n;i++){
				ans[a[2]]+=lx[i];
				ans[a[1]]+=lx[i]*(i%2);
			}
		else for(int i=1;i<=n;i++){
			ans[a[1]]+=lx[i];
			ans[a[2]]+=lx[i]*(i%2==0);
		}
	}
	for(int i=1;i<=m;i++)cout<<ans[i]<<" ";
	return 0;
}
