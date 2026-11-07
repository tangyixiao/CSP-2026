#include<bits/stdc++.h>
using namespace std; 
long long m,a;
int ans;
string c,s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>m;
	for(int i=0;i<m;++i){
		cin>>a>>c;
		for(int i=0;i<a;++i){
			s+=c;
		}
	}
	for(int i=0;i<s.size();++i){
		if(s[s.size()-1-i]!=s[i]){
			ans++; 
			s[i]=s[s.size()-1-i];
		}
	}
	cout<<ans;
	
}
