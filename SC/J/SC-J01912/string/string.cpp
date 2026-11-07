#include<bits/stdc++.h> 
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long int n,l,t=0;
	char a;
	cin>>n;
	string s,s1,s2;
	for(int i=1;i<=n;i++){
		cin>>l>>a;
		for(int i=1;i<=l;i++){
			s=s+a;
		}
	}
	for(int i=0;i<s.size()/2;i++){
		s1=s1+s[i];
	}
	for(int i=s.size()/2+1;i<s.size();i++){
		s2=s2+s[i];
	}
	for(int i=0;i<s.size()/2;i++){
		if(s1[i]!=s2[s.size()/2-i]){
			t++;
		}
	}
	cout<<t;
	cout<<endl<<s1<<endl<<s2;
	return 0;
}