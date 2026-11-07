#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int ans=0;
	long long n;
	int a;
	char b;
	cin>>n;
	string s;
	string p;
	for(int i=0;i<n;i++){
		cin>>a>>b;
		for(int j=0;j<a;j++){
			s+=b;
		} 
	} 
	for(int i=s.size()-1;i>=0;i--){
		p[i]=s[i];
	}
	for(int i=0;i<s.size();i++){
		if(p[i]!=s[i]){
			ans++;
		}
	}
	cout<<ans;
	return 0;
} 
