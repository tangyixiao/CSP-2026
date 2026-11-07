#include<bits/stdc++.h>
#define int unsigned long long
using namespace std;
const int N=2e5+10;
int n,m,a[N],k[N];

bool cmp(int x,int y){return x>y;}

signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	sort(a+1,a+n+1,cmp);
	for(int i=29;i>=0;i--){
		vector<int>ans;
		for(int j=1;j<=n;j++){
			if(a[j]&(1<<i))ans.push_back(j);
			if(ans.size()==m){
				for(int x=1;x<=m;x++)k[x]=a[ans[x-1]];
				break;
			}
		}
//		cout<<"Pos:"<<i<<" Sz:"<<ans.size()<<"\n";
		if(ans.size()==m)break;
	}
	for(int i=2;i<=m;i++){
//		cout<<k[1]<<"\n";
		k[1]&=k[i];
	}
	cout<<k[1]<<"\n";
	return 0;
}
