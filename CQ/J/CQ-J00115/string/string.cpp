#include<bits/stdc++.h>
using namespace std;
string s,s1,s2;
long long n,cnt;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++){
		long long a=0;
		string c;
		cin>>a;
		cin>>c;
		for(int j=0;j<a;j++){
			s+=c;
		}
	} 
	for(int i=0;i<s.size()/2;i++){
		s1+=s[i];
	}
	for(int i=s.size()/2+1;i<s.size();i++){
		s2+=s[i];
	}
	for(int i=0;i<s1.size();i++){
		if(s1[i]!=s2[i]) cnt++;
	}
	cout<<cnt;
	return 0;
}
