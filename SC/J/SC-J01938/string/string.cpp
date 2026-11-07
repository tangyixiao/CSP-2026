#include<bits/stdc++.h>
using namespace std;
string s,m,n,x;
long long r,cnt=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>r;
	for(long long i=0;i<r;i++){
		long long x;
		string str;
		cin>>x;
		cin>>str;
		for(long long j=0;j<x;j++){
			s+=str;
		}
	}
	if(s.size()%2==1){
		for(long long i=0;i<(s.size()-1)/2;i++){
			m+=s[i];
		}
		for(long long i=s.size()-1;i>(s.size()-1)/2;i--){
			n+=s[i];
		}
		for(long long i=0;i<m.size();i++){
			if(m[i]!=n[i]){
				cnt++;
			}
		}
	}
	else{
		for(long long i=0;i<s.size()/2;i++){
			m+=s[i];
		}
		for(long long i=s.size()-1;i>s.size()/2-1;i--){
			n+=s[i];
		}
		for(long long i=0;i<s.size()/2;i++){
			if(m[i]!=n[i]){
				cnt++;
			}
		}
	}
	cout<<cnt;
	return 0;
}