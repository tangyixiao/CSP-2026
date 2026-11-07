#include<bits/stdc++.h>
using namespace std;
int a[500010];
int cnt,sum[500010];
map<int,int>mpp;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i]; 
	}
	for(int i=1;i<=n;i++){
		map<int,pair<int,int>>mp;
		mp.clear();
		memset(sum,0,sizeof(sum));
		cnt=0;
		for(int j=i;j<=n;j++){
			if(mp[a[j]].first>=1){
				sum[mp[a[j]].second]=a[j];
				for(int k=mp[a[j]].second+1;k<=cnt;k++){
					mp[a[k]]={0,0};
				}
				cnt=mp[a[j]].second;
			}else{
				sum[++cnt]=a[j];
				mp[a[j]].first++;
				mp[a[j]].second=cnt;
			}
		}
		for(int j=1;j<=cnt;j++){
			mpp[sum[j]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<mpp[i]<<" ";
	}
	return 0;
}
