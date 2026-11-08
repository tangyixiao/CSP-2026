#include <bits/stdc++.h>
using namespace std;
long long n,x=0;
string s,s1;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	while(n--){
		long long a;
		char c;
		cin>>a>>c;
		for(long long i=1;i<=a;i++){
			s.push_back(c);
		}
	}
	for(long long i=s.size()-1;i>=0;i--){
		s1.push_back(s[i]);
	}
	for(long long i=0;i<s.size();i++){
		if(s[i]!=s1[i]){
			s[i]=s1[i];
			x++;
			s1[s.size()-1-i]=s1[i];
		}
	}
	cout<<x;
	return 0;
}
