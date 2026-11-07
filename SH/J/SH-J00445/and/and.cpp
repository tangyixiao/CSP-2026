#include<bits/stdc++.h>
using namespace std;
int n,m,ans;
vector<int>v,vv;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		int a;cin>>a;
		v.push_back(a);
	}
	for(int i=29;i>=0;i--){
		int cnt=0;
		for(int j:v){
			if(j&(1<<i))cnt++;
		}
		if(cnt>=m){
			ans|=(1<<i);
			for(int j:v)vv.push_back(j);
			v.clear();
			for(int j:vv){
				if(j&(1<<i))v.push_back(j);
			}
			vv.clear();
		}
	}
	cout<<ans;
	return 0;
}
