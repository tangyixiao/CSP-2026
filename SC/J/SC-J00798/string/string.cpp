#include<bits/stdc++.h>
using namespace std;
string s="";
char a;
long long m,n;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(long long i=1;i<=n;i++){
		cin>>m>>a;
		for(long long j=1;j<=m;j++){
			s+=a;
		}
	}
	long long b=0;
	if(s.size()%2==0){
		for(long long i=0;i<s.size()/2;i++){
			if(s[i]!=s[s.size()-1-i]){
				b++;
			}
		}
		cout<<b;
		return 0;
	}else{
		for(long long i=0;i<s.size()/2;i++){
			if(s[i]!=s[s.size()-1-i]){
				b++;
			}
		}
		cout<<b;
		return 0;
	}
	return 0;
}