#include <bits/stdc++.h>
using namespce std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	vector<pair<int,char> > s(n);
	for(int i=0;i<n;i++){
		cin>>s[i].first>>s[i].second;
	}
	int i=0,j=n-1;
	long long ans=0;
	while(i<j){
		int delta=min(s[i].first,s[j].first);
		if(s[i].second!=s[j].second) ans+=delta;
		s[i].first-=delta;
		s[j].first-=delta;
		if(s[i].first<=0) i++;
		if(s[j].first<=0) j--;
	}
	cout<<ans<<"\n";
	return 0;
}
