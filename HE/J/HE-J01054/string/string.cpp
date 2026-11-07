#include<bits/stdc++.h>
using namespace std;
char a;
long long c,sh,v,b;
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.in","w",stdout);
	cin>>sh;
	for(int i=1;i<=sh;i++){
		cin>>c>>a;
		for(long long i=1;i<=c;i++){
			s+=a;
		}
	}
	b=s.size()-1;
	for(long long i=0;i<s.size()/2;i++){
		if(s[i]!=s[b-i])v++;
	}
	cout<<v;
	return 0;
} 

