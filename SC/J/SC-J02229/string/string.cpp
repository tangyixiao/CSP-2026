#include<bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;cin>>n;
	string s="";
	for(int i=1;i<=n;i++){
		int a;char c;
		cin>>a>>c;
		s.insert(s.size(),a,c);
	}
	//cout<<s<<endl;
	int l=0,r=s.size()-1,cnt=0;
	while(l<r){
		if(s[l]!=s[r]){
			cnt++;
		}
		l++,r--;
	}
	cout<<cnt;
	
	return 0;
}