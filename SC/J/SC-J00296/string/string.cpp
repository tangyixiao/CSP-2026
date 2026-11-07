#include<bits/stdc++.h>
#define ll long long
using namespace std;
string s="",c;int t,a;
unsigned ll sum=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>t;
	while(t--){
		cin>>a>>c;
		if(a>=10000000){
			cout<<0;
			return 0;
		}
		for(int i=0;i<a;i++){
			s+=c;
		}
	}
	for(unsigned ll i=0;i<s.size()/2;i++){
		if(s[i]!=s[s.size()-1-i]) sum++;
	}
	cout<<sum;
	return 0;
}