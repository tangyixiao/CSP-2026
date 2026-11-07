#include<bits/stdc++.h>
using namespace std;
int n;
pair<long long,char> a[200005];
long long ans;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i].first>>a[i].second;
	int l=1,r=n;
	while(l<r){
		long long minn=min(a[l].first,a[r].first);
		if(a[l].second!=a[r].second) ans+=minn;
		a[l].first-=minn;
		a[r].first-=minn;
		if(a[l].first==0) l++;
		if(a[r].first==0) r--;
	}
	cout<<ans;
	return 0;
}