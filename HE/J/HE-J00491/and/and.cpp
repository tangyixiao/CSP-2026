#include <bits/stdc++.h>
using namespace std;
#define int long long
int n,m;
const int N=2e5+100;
int a[N];
vector<int> mp[50];
int lea[N];
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=1;i<=n;i++){
		int step=0;
		int x=a[i];
		lea[i]=1;
		while(x){
			if(x%2) mp[step].push_back(i);
			x>>=1;
			step++;
		}
	}
	int ans=0;
	for(int i=32;i>=0;i--){
		int cnt=0;
		if(mp[i].size()>=m){
			for(int j=0;j<mp[i].size();j++){
				if(lea[mp[i][j]]==1) lea[mp[i][j]]++;
			}
			for(int j=1;j<=n;j++) lea[j]=max(0ll,lea[j]-1);
			bool flag=1;
			int tmp=0;
			for(int j=0;j<mp[i].size();j++){
				if(lea[mp[i][j]]==1){
					if(flag==1){
						tmp=a[mp[i][j]];
						flag=0;
					}else{
						tmp&=a[mp[i][j]];
					}
					cnt++;
				}
			}
			if(cnt>=m) ans=max(ans,tmp);
		}
	}
	cout<<ans;
	return 0;
}

