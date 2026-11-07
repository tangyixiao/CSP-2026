#include<bits/stdc++.h>
using namespace std;
int n,a;
char s;
long long l=0,v=1;
map<long long,char>mp;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	
	for(int i=1;i<=n;i++){
		cin>>a;
		cin>>s;
		l+=a;
		for(int j=1;j<=a;j++){
			mp[v]=s;
			v++;
		}
	}
	long long o = (l+1)/2,t=0;
	for(int i=1;i<=o;i++){
		if(mp[i]!=mp[n+1-i]){
			t++;
		}
	}
	cout<<t;
	//
	return 0;
} 
