#include<bits/stdc++.h>
using namespace std;
const int N=200005;
pair<int,char> s[N],ss[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int n;cin>>n;
	for(int i=1;i<=n;i++){
		cin>>s[i].first>>s[i].second;
		ss[n-i+1].first=s[i].first;
		ss[n-i+1].second=s[i].second;
	}
	long long diff=0;
	string s1="",s2="";
	for(int i=1;i<=n;i++){
		for(int j=1;j<=s[i].first;j++){
			s1+=s[i].second;
		}
		for(int j=1;j<=ss[i].first;j++){
			s2+=ss[i].second;
		}
	}
	for(int i=0;i<s1.length();i++){
		if(s1[i]!=s2[i])diff++;
	}
	cout<<diff/2ll;
	return 0;
}
