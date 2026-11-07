#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,b=0,c=0;
	
	string s,d="";
	string a;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>b;
		cin>>a;
		while(b>0){
			s=s+a;
			b--;
		}
		a="";
		b=0;
	}
	for(int i=s.size();i>=0;i--){
		d=d+s[i];
	}
	for(int i=0;i<s.size();i++){
		if(d[i+1]!=s[i]){
			c++;
		}
	}
	cout<<c;
	return 0;
}
