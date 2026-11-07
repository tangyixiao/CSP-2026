#include<bits/stdc++.h>
using namespace std;
int n,m,cnt[35],ans;
vector<int> ok;
struct Node{
	int dat;
	bool a[35];
	bool operator<(const Node& o)const{
		int i=0;
		for(;i<ok.size();i++)
			if(a[ok[i]]!=o.a[ok[i]])break;
		return a[ok[i]]>o.a[ok[i]];
	}
}g[200005];
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>g[i].dat;
		int j=0,x=g[i].dat;
		while(x){
			if(x&1)g[i].a[j]=1,cnt[j]++;
			x/=2,j++;
		}
	}
	for(int i=30;i>=0;i--)
		if(cnt[i]>=m)ok.push_back(i);
	sort(g+1,g+n+1);
	ans=g[1].dat;
	for(int i=2;i<=m;i++)ans&=g[i].dat;
	cout<<ans;
	return 0;
}

