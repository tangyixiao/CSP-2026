#include<bits/stdc++.h>
using namespace std;
vector<char> s;
int main(){
	
	freopen("string.in","r","stdin");
	freopen("string.out","w","stdout");
	long long n,ans=0;
	long long a;
	char c;
	cin>>n;
	s.push_back('.');
	for(int i=1;i<=n;i++){
		cin>>a>>c;
		for(int j=1;j<=a;j++){
			s.push_back(c);
		}
	}
	for(int i=1;i*i<s.size();i++){
		if(s[i]!=s[s.size()-i]){
			s[s.size()+1-i]=s[i];
			ans++;
		}
	}
	cout<<ans;
	
	return 0;
}