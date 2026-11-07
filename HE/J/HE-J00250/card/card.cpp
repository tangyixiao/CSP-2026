#include<bits/stdc++.h>
using namespace std;
const int N=5e5+10,M=3e5+10;
#define ll long long
int n,m,a[N],ans[M];
int mp[M][3];
int main () {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1; i<=n; i++) {
		cin>>a[i];
	}
	for(int i=1; i<=n; i ++) {
		memset(mp,0,sizeof(mp));
		memset(cnt,0,sizeof(cnt));
		for(int j=i; j<=n; j++) {
			if(mp[a[j]][0]==1) {
				for(int k=mp[a[j]][1];k<j;k++){
					if(mp[a[k]][2]!=1) continue;
					mp[a[k]][0]--;
					mp[a[k]][1]=0;
					mp[a[k]][2]=0;
				}
			}
			mp[a[j]][0]++;
			mp[a[j]][1]=j;
			mp[a[j]][2]=1;
//			for(int k=1;k<=m;k++) cout << mp[k][0]<<" ";
//			cout <<endl;
		}
		for(int j=1; j<=m; j++) {
			ans[j]+=mp[j][0];
		}
	}
	for(int i=1; i<=m; i++) {
		cout << ans[i]<<" ";
	}
	return 0;
}
/*
10 3
3 1 2 1 3 2 3 1 2 1 0 3 
*/
