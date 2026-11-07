#include <bits/stdc++.h>
using namespace std;
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;
	cin>>n;
	string s="",s1="";	
	long long k=0,j=0;
	for(int i=0;i<n;i++){
		int a;
		char c;
		cin>>a>>c;
		for(int j=0;j<a;j++){
			s+=c;
		}
		k+=a;
	}
	long long l=s.size()-1;
	for(int i=0;i<s.size();i++){
		s1+=s[l];
		l--;
	}

	long long cnt=0;
	for(int i=0;i<s.size();i++){
		if(s[i]==s1[i]){
			cnt++;	
		}
	}
	cout<<s<<endl<<s1;
	if(cnt==s.size()){
		cout<<0;
	}else if(cnt==0){
		cout<<k/2;
	}else{
		cout<<cnt+1;
	}
	
	
	return 0;
}
