#include<bits/stdc++.h>
using namespace std;
long long n,l,as;
string s="";
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		int x;
		char c;
		cin>>x>>c;
		for(int j=1;j<=x;j++)
			s+=c;
		l+=x;
	}
	for(int i=0;i<s.size();i++){
		if(s[i]!=s[l-1-i]){
			as++;
			s[l-1-i]=s[i];
		}
	}
	cout<<as;
	return 0;
}

