#include<bits/stdc++.h>
using namespace std;
#define int long long
int n;
vector<int> v;
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		int a;
		char c;
		cin>>a>>c;
		for(int j=1;j<=a;j++){
			v.push_back((int)(c-'a'+1));
		}
	}
	int ans=0;
	for(int i=0;i<=v.size()/2;i++){
		if(v[i]!=v[v.size()-1-i])ans++;
	}
	cout<<ans;
}
