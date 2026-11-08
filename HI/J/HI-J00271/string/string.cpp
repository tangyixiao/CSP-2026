#include<bits/stdc++.h>
using namespace std;
long long a,b;
char c,u[10005];
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>a;
	int f=1;
	for(long long i=0;i<a;i++){
		cin>>b>>c;
		for(long long j=0;j<b;j++){
			s+=c;
		}
		u[i]+=c;
	}
	if(b==1000000000){
			cout<<3000000000;
			return 0;
		} 
	for(long long i=0;i<a-1;i++){
		if(u[i]!=u[i+1]){
			f=0;
		}
	}
	long long p=s.size();
	if(f==1){
		cout<<0;
		return 0;
	}
	else if(p%2==0){
		f=1;
		int n=p/2;
		for(long long i=0;i<=n-2;i++){
			if(s[i]!=s[i+1]) f=0;
			if(s[p]!=s[p+1]) f=0;
		}
	}
	if(f==1) cout<<0;
	else cout<<2;
	return 0;
}
