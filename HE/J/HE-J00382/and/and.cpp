#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=2e5+50;
int n,m;
ll a[N];
ll f[N][35];
vector<int>ve,g;
ll ans;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		ve.push_back(i);
		for(int j=0;j<=31;j++){
			f[i][j]=((a[i]>>j)&1);
		}
	}
	for(int i=30;i>=0;i--){
		g.clear();
		for(auto o:ve){
			if(f[o][i]==1) g.push_back(o); 
		}
		if(g.size()>=m){
			ans+=(1<<i);
			ve.swap(g);
		}
	}
	cout<<ans;
	return 0;
}
