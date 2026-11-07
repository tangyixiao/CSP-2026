#include<bits/stdc++.h>
using namespace std;
long long a,q,l,r,ans=0;
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>a;
	for(int i=0;i<a;i++){
		cin>>q;
		char c;
		cin>>c;
		for(int j=0;j<q;j++){
			s+=c;
		}
	}
	l=0,r=s.size()-1;
	for(int i=0;i<s.size()/2;i++){
		if(s[l]!=s[r]) ans++;
		l++;
		r--;
	}
	cout<<ans;
	return 0;
}
