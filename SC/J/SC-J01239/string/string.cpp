#include<bits/stdc++.h>
using namespace std;
#define int long long
pair<int,char>a[200005];
int n;
long long ans;
signed main(){
	freopen("string.in","r",stdin);freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)cin>>a[i].first>>a[i].second;
	int l=1,r=n;
	while(l<r){
		if(a[l].second!=a[r].second){
			int minn=min(a[l].first,a[r].first);
			ans+=minn;
			a[l].first-=minn;a[r].first-=minn;
			if(!a[l].first)l++;
			else r--;
		}
		else{
			int minn=min(a[l].first,a[r].first);
			a[l].first-=minn;a[r].first-=minn;
			if(!a[l].first)l++;
			else r--;
		}
	}
	cout<<ans;
	return 0;
} 