#include<bits/stdc++.h>
using namespace std;
int n,len;
long long ans;
string s,gm;
char a;
bool hw(string s){
	bool flag=1;
	for(int i=0 ; i<s.size() ; i++){
		gm[s.size()-i-1]=s[i]; 
		if(gm[s.size()-i-1]!=s[s.size()-i-1]) flag=0;
	}
	if(flag) return 1;
	return 0;
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>len>>a;
		for(int j=0;j<len;j++){
			s+=a;
		}
	}
	if(hw(s)){
		cout<<"0";	
		return 0;
	}
	else{
		for(int i=0;i<(s.size()/2);i++){
			if(gm[i]!=s[i]) ans++;
		}
	}
	cout<<ans;
	return 0;
} 