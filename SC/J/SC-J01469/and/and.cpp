#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	vector<int>a(n);
	for(int i=0;i<n;i++)cin>>a[i];
	if(m==n){
		int ans=a[0];
		for(int i=1;i<n;i++)ans=ans&a[i];
		cout<<ans;
		return 0;
	}
	if(m==1){
		int ans=0;
		for(int i=0;i<n;i++)ans=max(ans,a[i]);
		cout<<ans;
		return 0;
	}
	int ans=9223372036854775807,s;
	while(m--){
		s=-1;
		int idx;
		for(int i=0;i<n;i++){
			if(ans&a[i]>s){
				s=ans&a[i];
				idx=i;
			}
		}
		ans=s;
		a.erase(a.begin()+idx);
	}
	cout<<ans;
	return 0;
}