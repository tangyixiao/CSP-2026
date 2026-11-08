#include<bits/stdc++.h>
#define ll long long
using namespace std;

int ans;
string s,s1;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ll n;
	cin>>n;
	for(int i=1;i<=n;i++){
		int a;
		char c;
		cin>>a>>c;
		for(int j=1;j<=a;j++){
			s+=c;
		}
	}
	for(int i=s.size()-1,j=0;i>=0;i--,j++){
		s1[j]=s[i];
	}
	for(int i=0;i<s.size();i++){
		if(s[i]!=s1[i]){
			s[i]=s1[i];
			s[s.size()-1-i]=s1[i];
			ans++;
		}
	}
	cout<<(ans-1)/2+1;
	return 0;
}
//68
