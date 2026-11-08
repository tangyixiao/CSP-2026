#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
pair<int , char > g[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		int a;
		char c;
		cin>>a >> c;
		g[i]={a,c};
	}
	if(n==2 && g[1].second==g[2].second){
		cout<<0;
		return 0;
	}
	long long ans=0;
	long long c=0;
	for(int i=1;i<=n/2;i++){
		int ci=n+1-i;
		if(g[i].second==g[ci].second){
			ans+=abs(g[i].first-g[ci].first);
		}else{	
			ans+=min(g[ci].first,g[i].first)+abs(g[i].first-g[ci].first);
		}
	}
	cout<<ans-c; 
	return 0;
}

