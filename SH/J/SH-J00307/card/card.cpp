#include<bits/stdc++.h>
using namespace std;
int n,m,a[500010],cnt[300010]; 
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		
	}
	for(int i=1;i<n;i++){
		int last[300010]={},vis[300010]={};
		for(int j=i;j<=n;j++){
			if(last[a[j]]==0){
				last[a[j]]=j;
			}
			else{
				for(int k=last[a[j]];k<=j;k++){
					vis[k]=1;
				}
			}
		}
		for(int j=i;j<=n;j++){
			if(vis[j]==0)cnt[j]++;
		}
	}
	for(int i=1;i<=n;i++){
		cout<<cnt[i];
	}
	return 0;
} 
