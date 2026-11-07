#include<bits/stdc++.h>
using namespace std;
#define int long long
const int maxn=5e5+100;
int n,m,a[maxn],cnt[maxn];
map<int,int> mp;
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		mp.clear();
//		for(int i=1;i<=3;i++){
//			cout<<mp[i]<<" ";
//		}
		for(int j=i;j<=n;j++){
			if(mp[a[j]]!=0){
				for(int k=mp[a[j]]+1;k<=j;k++){
					cnt[a[k]]--;
//					cout<<a[k]<<" ";
				}
//				cout<<'\n';
			}
			cnt[a[j]]++;
			mp[a[i]]=i;
		}
//		for(int i=1;i<=m;i++){
//			cout<<cnt[i]<<" ";
//		}
//		cout<<'\n';
	}
	for(int i=1;i<=m;i++){
		cout<<cnt[i]<<" ";
	}

	return 0;
}