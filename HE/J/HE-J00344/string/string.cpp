#include<bits/stdc++.h>
#define ll unsigned long long
using namespace  std;
ll n,ml,sum;
string s,k;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n;
	for(int i=0;i<n;i++){
		int a;
		string c;
		cin>>a>>c;
		for(int j=0;j<a;j++){
			s+=c;
			k+=c;
		}
	}
	reverse(k.begin(),k.end());
	if(s==k){
		cout<<0;
		return 0;
	}
	ml=s.size()/2;
	for(int i=0;i<ml;i++){
		if(s[i]!=s[s.size()-1-i]) sum++;
	}
	cout<<sum;
	return 0;
}
