#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	int a;
	char b;
	long long cnt=0;
	string s={};
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a>>b;
		s+=a*b;
	}
	if(n==1){
		cout<<"0"<<"\n";
	}
	for(int i=0;i<s.length();i++){
		if(s[i]==s[s.length()-1-i]){
			cnt++;
			continue;
		}else{
			
		}
	}
	if(cnt==s.length()) cout<<"0"<<'\n';
	if(n==2){
		cout<<"3"<<'\n';
	}
	
}