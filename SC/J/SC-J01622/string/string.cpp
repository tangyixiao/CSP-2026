#include<bits/stdc++.h>
using namespace std;
string s;
int sum,n;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>sum>>s[i];
	}
	if(n==1) {
		cout<<0;
		return 0;
	}
	else if(n==2){
		if(s[1]==s[2]) cout<<0;
		else cout<<1;
		return 0;
	}
	int f=1;
	for(int i=1;i<=n-1;i++){
		if(s[i]!=s[i+1]){
			f=0;
		}
	}
	if(f){
		cout<<1;
		return 0;
	}
	return 0;
}