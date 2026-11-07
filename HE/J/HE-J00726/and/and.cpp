#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int n,m,a[N];
vector<int> v,g;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for (int i=1;i<=n;i++){
		cin>>a[i];
		v.push_back(i);
	}
	for (int i=30;i>=0;i--){
		g.clear();
		for (int j:v)
			if ((a[j]>>i)&1) g.push_back(j);
		if ((int)g.size()>=m) v=g;
	}
	int ans=a[v[0]];
	for (int i=1;i<m;i++)
		ans&=a[v[i]];
	cout<<ans<<'\n';
	return 0;
}

/*
布鲁昂吧邦吧邦吧邦吧邦吧邦吧邦吧 wo！

窗外的天气~ wo！
就像是 hehe~ 你多变的表情 
*/
