#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;cin>>n;
	vector<pair<int,char>> s(n);
	for(int i=0;i<n;i++){
		cin>>s[i].first>>s[i].second;
	}
	int ans=0;
	for(int i=0,j=n-1;i<j;){
		if(s[i].first>s[j].first){
			s[i].first-=s[j].first;
			if(s[i].second!=s[j].second)ans+=s[j].first;
			j--;
		}else{
			s[j].first-=s[i].first;
			if(s[i].second!=s[j].second)ans+=s[i].first;
			i++;
			if(s[j].first==0)j--;
		}
//		cout<<i<<' '<<j<<'\n';
	}
	cout<<ans<<'\n';
	return 0;
}