#include<bits/stdc++.h>
using namespace std;
string s;
void solve(string s){
	string tp=s; 
	reverse(s.begin(),s.end());
	if(s==tp){
		cout<<0<<endl;
		return;
	}
	int len=s.length();
	long long ans=0;
	if(len%2==0){
		for(int i=len/2-1,j=len/2;i>=0,j<len;i--,j++){
			if(s[i]==s[j])continue;
			else ans+=1;
		}
		cout<<ans<<endl;
		return;
	}else{
		for(int i=len/2,j=len/2;i>=0,j<len;i--,j++){
			if(s[i]==s[j])continue;
			else ans+=1;
		}
		cout<<ans<<endl;
		return;
	}
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0); 
	int n;cin>>n;
	while(n--){
		int x;cin>>x;
		char a;cin>>a;
		for(int i=0;i<x;i++){
		    s+=a;	
		}
	}
	solve(s); 
	return 0;
}
