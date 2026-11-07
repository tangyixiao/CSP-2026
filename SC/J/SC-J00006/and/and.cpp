#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
constexpr int N=4e5+7;
int n,m;
vector<int> rest;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		int x;cin>>x;
		rest.push_back(x);
	}int res=0;
	for(int i=29;i>=0;i--){
		int cnt=0;
		for(int &x:rest){
			if(x>>i&1) cnt++;
		}if(cnt>=m){
			res|=(1<<i);
			vector<int> nv={};
			for(int &x:rest){
				if(x>>i&1) nv.push_back(x);
			}rest=nv;
		}
	}cout<<res;
	return 0;
}