#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	int n;
	string s;
	cin>>n;
	while(n--){
		int a;
		char b;
		cin>>a>>b;
		for(int i=1;i<=a;i++){
			s+=b;
		}
	}
	string s1;
	for(int i=s.size()-1;i>=0;i--){
		s1+=s[i];
	}
	if(s1==s){
		cout<<0;
		return 0;
	}else{
		int cnt=0;
		for(int i=0;i<s.size();i++){
			if(s[i]!=s1[i]) cnt++;
		}
		cout<<cnt/2;
	}
	return 0;
} 
