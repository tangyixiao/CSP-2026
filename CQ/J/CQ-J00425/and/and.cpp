#include <bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int n,m,a,sz[35];
long long ans;
map<int,int> st[2],v[35];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a;
		int x=a;
		st[0][a]++;
		while(x){
			v[__builtin_ctz(x)][a]++;
			x-=(x&-x);
		}
	}
	int z=0;
	for(int i=32;i>=0;i--){
		int sum=0;
		for(auto j:v[i])sum+=j.first;
		if(sum<m) continue;
		int cnt=0;
		st[1-z].clear();
		for(auto j:v[i]){
			if(st[z].find(j.first)!=st[z].end()){
				st[1-z][j.first]+=j.second;
				cnt+=j.second;
			}
		}
		if(cnt>=m){
			z=1-z;
			ans+=pow(2,i);
		}
	}
	cout<<ans;
	return 0;
}
