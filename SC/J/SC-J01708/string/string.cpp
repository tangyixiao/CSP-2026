#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
struct mode{
	int a;
	char c;
}g[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	ll n;
	cin>>n;
	string s;
	for(int i=1;i<=n;i++){
		cin>>g[i].a>>g[i].c;
	}
	ll l=1,r=n,sum=0;
	while(l<r){
		if(g[l].c==g[r].c){
			int minn=min(g[l].a,g[r].a);
			g[l].a-=minn;
			g[r].a-=minn;
			if(g[l].a==0) l++;
			if(g[r].a==0) r--;
		}
		else{
			int minn=min(g[l].a,g[r].a);
			sum+=minn;
			g[l].a-=minn;
			g[r].a-=minn;
			if(g[l].a==0) l++;
			if(g[r].a==0) r--;
		}
	}
	cout<<sum;
	return 0;
}