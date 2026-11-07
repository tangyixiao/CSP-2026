#include<bits/stdc++.h>
using namespace std;
//#define int unsigned long long
int a[100005];
int v[100005];
int ans[1000005];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		map<int,int>mp;
		map<int,int>mp1;
		for(int j=i;j<=n;j++){
			if(mp[a[j]]){
				for(int k=mp1[a[j]];k<=j;k++){
					ans[a[k]]--;
				}
			}
			ans[a[j]]++;
			mp1[a[j]]=j;
			mp[a[j]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}
