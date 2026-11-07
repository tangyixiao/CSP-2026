#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,m,a[500010],ans[500010];
bool flag[500010];
stack<int> sta;
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%lld %lld",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%lld",&a[i]);
	}
	if(n<=5000){
		for(int i=1;i<=n;i++){
			memset(flag,0,sizeof(flag));
			for(int j=i;j<=n;j++){
				if(flag[a[j]]==1){
					while(sta.empty()==0&&sta.top()!=a[j]){
						flag[sta.top()]=0;
						sta.pop(); 
					}
				}
				else{
					sta.push(a[j]);
					flag[a[j]]=1;
				}
			}
			while(sta.empty()==0){
				ans[sta.top()]++;
				sta.pop();
			}
		}
		for(int i=1;i<=m;i++){
			printf("%lld ",ans[i]);
		}
		return 0;
	}
	for(int i=n;i>=1;i--){
		if(flag[a[i]]==1){
			while(sta.empty()==0&&sta.top()!=a[i]){
				ans[sta.top()]-=i;
				flag[sta.top()]=0;
				sta.pop(); 
			}
		}
		else{
			sta.push(a[i]);
			ans[a[i]]+=i;
			flag[a[i]]=1;
		}
	}
	for(int i=1;i<=m;i++){
		printf("%lld ",ans[i]);
	}
	return 0;
}
