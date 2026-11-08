#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,m,a[200005];
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int S=0;
	for(int j=30;j>=0;j--){
		int cnt=0;
		for(int i=1;i<=n;i++){
			if((a[i]&S)==S&&((a[i]>>j)&1)){
				cnt++;
			}
		}
		if(cnt>=m)S|=(1<<j);
	}
	cout<<S;
	return 0;
}//rp++