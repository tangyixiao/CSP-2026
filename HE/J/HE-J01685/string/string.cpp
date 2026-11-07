#include<bits/stdc++.h>
using namespace std;
long long n,a,c;
string s,s1,b;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a>>b;
		for(int j=1;j<=a;j++){
			s+=b;
		}
	}
	for(int i=s.size()-1;i>=0;i--)
		s1+=s[i];
	if(s1==s){
		cout<<c;
	}else{
		for(int i=0;i<s.size()/2;i++){
			if(s[i]!=s[s.size()-i]) c++;
	 	}
	 	cout<<c-1;
	}
	
	return 0;
}
