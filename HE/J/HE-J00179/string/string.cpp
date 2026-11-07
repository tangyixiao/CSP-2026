#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=2e5+5;
struct node{
	int x;
	char c;
}a[N];
int n;
ll sum,ans;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i].x>>a[i].c,sum+=a[i].x;
	ll l=1,r=n,now=0;
	while(1){
		int maxx,minn,maxa;
		minn=min(a[l].x,a[r].x);
		a[l].x-=minn;
		a[r].x-=minn;
		ans+= a[l].c==a[r].c?0:minn;
		if(!a[l].x) l++;
		if(!a[r].x) r--;
		if(l>=r) break;
	}
	cout<<ans;
	return 0;
}
