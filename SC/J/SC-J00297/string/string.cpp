#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	string s;
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		int m;
		cin>>m;
		char c;
		cin>>c;
		for(int j=1;j<=m;j++){
			s.push_back(c);
		}
	}
	if(s.size()%2==0){
		string s1;
		string s2;
		s1=s.substr(0,s.size()/2);
		s2=s.substr(s.size()/2,s.size());
		if(s1==s2){
			cout<<0;
		}
		else{
			long long cnt=0;
			for(int i=0;i<s1.size();i++){
				if(s1[i]!=s2[i]){
					cnt++;
				}
			}
			cout<<cnt;
		}
	}
	else{
		string s1;
		string s2;
		s1=s.substr(0,s.size()/2);
		s2=s.substr(s.size()/2+1,s.size());
		if(s1==s2){
			cout<<0;
		}
		else{
			long long cnt=0;
			for(int i=0;i<s1.size();i++){
				if(s1[i]!=s2[i]){
					cnt++;
				}
			}
			cout<<cnt;
		}
	}
	return 0;
}