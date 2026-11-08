#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=2*1e5+10;
int n,m;
int a[N];
vector<int>w[35];
vector<int>ed[35];
int f[35];
int log(int x){
	return 31-__builtin_clz(x);
}
int ans;
void dfs(vector<int>v[],int last){
	vector<int>d[35];
	for(int i=last;i>=0;i--){
		if(f[i])continue;
		if(v[i].size()>=m){
			for(int x:v[i]){
				for(int z=x;z>0;z-=((z)&(-z))){
					int k=(z)&(-z);
//					cout<<z<<endl;
					if(f[log(k)])continue; 
					d[log(k)].push_back(x);
				}
			}
			f[i]=1; 
			ans+=(1<<i);
			dfs(d,i);
			break;
		}
	}
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%lld%lld",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%lld",&a[i]);
		for(int x=a[i];x>0;x-=((x)&(-x))){
			int k=log((x)&(-x));
			w[k].push_back(a[i]);
		}
	}
	dfs(w,30);
	printf("%lld",ans);
	return 0;
}
