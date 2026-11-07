#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int a[n+1]={};
	for(int i=1;i<=n;i++)cin>>a[i];
	int ans[m+1]={};
	for(int i=1;i<=n;i++){
		unordered_map<int,int>mp;
		int b[n+1]={},num=1;
		for(int j=i;j<=n;j++){
			if(mp[a[j]]==0){
				b[num]=a[j];
				mp[a[j]]=num;
				num++;
			}
			else {
				num=mp[a[j]];
				b[num]=a[j];
				num++;
			}
		}
		for(int i=1;i<num;i++)ans[b[i]]++;
	}
	for(int i=1;i<=m;i++)cout<<ans[i]<<' ';
	return 0;
}
