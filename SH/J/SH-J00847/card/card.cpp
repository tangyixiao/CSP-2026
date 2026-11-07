#include<bits/stdc++.h>
using namespace std;
int a[500010],s[500010];
bool vis[500010];
int ans[500010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int top=0;
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			int b=a[j];
			if(vis[b]){
				for(;;){
					if(s[top]==b)break;
					vis[s[top]]=0;
					top--;
				}
			}else{
				vis[b]=1;
				top++;s[top]=b;
			}
		}
		for(int i=1;i<=m;i++){
			if(vis[i])ans[i]++;
			vis[i]=0;
		}
		top=0;
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
} 
