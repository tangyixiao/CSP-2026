#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500010];
int st[500010],top;
int cnt[300010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		top=0;
		unordered_map<int,int> mp;
		for(int j=i;j<=n;j++){
			if(!mp[a[j]]){
				mp[a[j]]=j;
				st[++top]=a[j];
			}else{
				for(int k=top;k>mp[a[j]];k--){
					mp[st[k]]=0; 
				}
				top=mp[a[j]];
			}
		}
		for(int j=1;j<=top;j++){
			cnt[st[j]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<cnt[i]<<' ';
	}
}
