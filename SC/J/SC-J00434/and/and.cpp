#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+10;
int n,m;
int a[N],ans=(1ll<<31)-1ll;
vector<int> num[32];
void f(int x){
	int res=0;
	for(int i=0;i<=32;i++){
		if(x&(1<<i)){
			res|=(1<<i);
			num[i+1].push_back(res);
		}
	}
}
bool cmp(int x,int y){
	return x>y;
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++) f(a[i]);
	for(int i=32;i>=0;i--){
		if(num[i].size()>=m){
			sort(num[i].begin(),num[i].end(),cmp);
			for(int j=0;j<m;j++) ans&=num[i][j];
			cout<<ans<<'\n';
			return 0;
		}
	}
}


