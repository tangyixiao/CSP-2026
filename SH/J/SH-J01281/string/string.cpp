#include<bits/stdc++.h>
#define int long long
using namespace std;
string s,sr;

signed main(){
	freopen("string6.in","r",stdin);
	freopen("string.out","w",stdout);
	
	int n,len=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		int a;
		char c;
		cin>>a>>c;
		while(a--){
			s+=c;
			len++;
		}
	}
	for(int i=len-1;i>=0;i--){
		sr+=s[i];
	}
	
	if(sr==s){
		cout<<0<<endl;
		return 0;
	}
	
	int diff=0;
	for(int i=0;i<len;i++){
		if(sr[i]!=s[i])
			diff++;
	}
	
	cout<<diff/2<<endl;
	
	return 0;
}
