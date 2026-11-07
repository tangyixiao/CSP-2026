#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500005];
int t[300005];
int ans[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(t[a[j]]){
				for(int k=t[a[j]];k<j;k++)t[a[k]]=0;
			}
			t[a[j]]=j;
		}
		for(int i=1;i<=m;i++){
			if(t[i])ans[i]++;
			t[i]=0;
		}
	}
	for(int i=1;i<=m;i++)cout<<ans[i]<<" ";
	return 0;
}
