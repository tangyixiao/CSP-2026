#include <bits/stdc++.h>
#define endl '\n'
#define int long long
using namespace std;
int n,m,inn,outt;
map <int,int> as;
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++) {
		cin>>inn;
		as[inn]+=1;
	}
	for(int i=1;i<=m;i++) {
		cout<<as[i]+outt<<" ";
		outt+=as[i];
	}
	return 0;
}