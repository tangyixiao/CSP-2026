#include<bits/stdc++.h>
#define int long long  
using namespace std;
bool hui(string a){
	for(int i=0;i<a.size()/2;i++){
		int len=a.size();
		if(a[i]!=a[len-1-i]) return false;
	}
	return true;
}
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int cnt=0;
	string s;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		string c;
		cin>>c;
		for(int j=0;j<a;j++){
			s+=c;
		}
	}
	
	if(hui(s)){
		cout<<0;
		return 0;
	}
	for(int i=0;i<s.size()/2;i++){
		if(s[i]!=s[s.size()-1-i])cnt++;
	}
	cout<<cnt;
	return 0;
}
