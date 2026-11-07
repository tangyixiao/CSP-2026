#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;
	cin>>n;
	string s;
	for(int i = 0;i<n;i++){
		long long a;
		char c;
		cin>>a>>c;
		for(int i = 0;i<a;i++){
			s+=c;
		}
	}
	long long cnt = 0;
	string s1;
	string s2;
	if(s.size() % 2 == 0){
		for(int i = 0;i<s.size()/2;i++){
			s1 +=s[i];
		}
		for(int i = s.size()/2;i<s.size();i++){
			s2 +=s[i];
		}
	}
	else{
		for(int i = 0;i<(s.size()-1)/2;i++){
			s1 +=s[i];
		}
		for(int i = (s.size()+1)/2;i<s.size();i++){
			s2 +=s[i];
		}
	}
	for(int i = 0;i<s1.size();i++){
		if(s1[i] != s2[i]){
			cnt++;
		}
	}
	cout<<cnt;
	fclose;
	fclose;
}
