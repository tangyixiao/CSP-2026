#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m;
int a[500005];
int pre[300005];
int tot[300005];
bool vis[300005];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		scanf("%lld",&a[i]);
	}
	for(int i=1;i<=n;i++){ //枚举回合
		string ts; //牌的列表 
		for(int j=i;j<=n;j++){ //当前牌 
			ts.push_back(a[j]+'0');
			if(pre[a[j]]!=0)
				ts.erase(pre[a[j]],ts.size());
			pre[a[j]]=j;
		}
		for(int j=0;j<ts.size();j++){
			if(!vis[ts[j]-'0'])
				tot[ts[j]-'0']++;
			vis[ts[j]-'0']=true;
		}
		memset(pre,0,sizeof(pre));
		memset(vis,false,sizeof(vis));
	}
	for(int i=1;i<=m;i++)
		printf("%lld ",tot[i]);
	return 0;
}