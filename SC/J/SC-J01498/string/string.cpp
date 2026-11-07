#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n,m;
	cin>>n;
	long long l=0,r=n-1,s=0,ans=0;
	vector<pair<long long,char>> a(n);
	for(int i=0;i<n;++i){
		cin>>a[i].first>>a[i].second;
		s+=a[i].first;
	}
	while(l<r){
		m=min(a[l].first,a[r].first);
		a[l].first-=m;
		a[r].first-=m;
		if(a[l].second!=a[r].second){
			ans+=m;
		}
		if(a[l].first==0){
			l++;
		}
		if(a[r].first==0){
			--r;
		}
	}
	cout<<ans;
	return 0;
}