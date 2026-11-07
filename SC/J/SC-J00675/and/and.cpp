#include <bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int n,a[N],m;
map<int,int> mp;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		mp[a[i]]++;
	}
	int mx=0,cn=0;
	sort(a+1,a+n+1);
	int h=std::unique(a+1,a+n+1)-a;
	for(int i=h;i>=1;i--){
		if(mp[a[i]]>=m){
			return cout<<a[i],0;
		}
		else{
			mx=max(mx,mp[a[i]]);
			cn=a[i];
		}
	} 
	int ans=0,cnt;
	while(mx<m){
		for(int i=h;i>=1;i--){
			if((a[i]&&cn)>ans){
				ans=a[i]&&cn;
				cnt=mp[a[i]];
			}
		}
		mx+=cnt;
	}
	cout<<ans;
	return 0;
}