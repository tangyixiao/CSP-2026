#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
using ll=long long;
const int N=2e5+5;
int n,m,a[N];
ll ans=0;
vector<int>vec;
void dfs(int d){
	if(d==-1) return;
//	cout<<ans<<endl;
//	cout<<l<<" "<<r<<" "<<d<<endl; 
//	int minl=r+1;
	vector<int>vec1;
	for(int t:vec){
//		cout<<((a[i]>>d)&1)<<" ";
		if((a[t]>>d)&1) vec1.push_back(t);
	}
//	cout<<d<<" "<<vec1.size()<<" "<<m<<endl;
//	cout<<endl;
	if((int)vec1.size()>=m) ans|=(1ll<<d),vec=vec1,dfs(d-1);
	else dfs(d-1);
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i],vec.push_back(i);
	sort(a+1,a+n+1);
	dfs(31);
	cout<<ans;
	return 0;
}
/*
4 2
3 15 12 12
*/
