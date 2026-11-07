#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
int a[500005];
vector<int> pd[500005];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;cin >>n>>m;
	for(int i=1;i<=n;++i){
		cin >>a[i];
	}
	for(int i=1;i<=n;++i){
		for(int j=i;j<=n;++j){
			int ds=a[j];
			bool t=1;
			int wz=0,y=0;
			for(auto x:pd[i]){
				if(x==ds){
					t=0;
					wz=y;
					break;
				}
				y++;
			}
			if(!t){
				for(int x=wz;x<pd[i].size();++x){
					pd[i][x]=-1;
				}
			}
			pd[i].push_back(ds);
		}
	}
	for(int i=1;i<=m;++i){
		int zs=0;
		for(int x=1;x<=n;++x){
			for(auto j:pd[x]){
				if(j==i){
					zs++;
				}
			}
		}
		cout<<zs<<" ";
	}
	return 0;
}