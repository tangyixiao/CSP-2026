#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n; cin>>n;
    string s="";
    for(long long i=1;i<=n;i++){
    	long long nl; char a;
    	cin>>nl>>a;
    	for(long long j=1;j<=nl;j++){
    		s+=a;
		}
	}
	long long c=0;
	for(long long i=0;i<s.size()/2;i++){
		if(s[i]!=s[s.size()-1-i]) c++;
	 }
	cout<<c;
	return 0;
}
