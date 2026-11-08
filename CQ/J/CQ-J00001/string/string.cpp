#include<bits/stdc++.h>
using namespace std;
long long n,mx=-2e9;
char b;
long long a;
map<char,long long> mp;
int main(){
	//freopen("string.in","r",stdin);
	//freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a>>b;
		mp[b]+=a;
	}
	if(mp.size()==1){
		cout<<0;
		return 0;
	}
	for(auto i:mp){
		mx=max(mx,i.second);
	}
	cout<<mx;
	return 0;
} 
