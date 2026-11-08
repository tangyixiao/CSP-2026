#include<bits/stdc++.h>
using namespace std;
//const long long N=1e10+1;
long long s[10000000005];
char j[10000000009];
bool hw(string x){
	string s;
	for(int i=x.size()-1;i>=0;i--)
	{
		s+=x[i];
	}
	if(s==x){
		return 1;
	}else{
		return 0;
	}
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;
	cin>>n;
	string k="";
	int ok=1,m=0;
	for(int i=1;i<=n;i++)
	{ 
		cin>>s[i];
		cin>>j[i];
		if((s[i]!=s[i-1]&&i!=1&&j[i]!=j[i-1])){
			ok=0;
		}
	}
	int ans=0;
	if(ok==1){
		
		for(int i=1;i<=n;i++){
			k+=j[i];
		}
		if(hw(k)){
			cout<<0;
			return 0;
		}
		for(int i=0;i<k.size()/2;i++){
			if(k[i]!=k[k.size()-i]){
				ans++;
			}
		}
		cout<<ans*s[1];
	}else{
		for(int i=1;i<=n;i++){
			for(int l=1;l<=s[i];l++){
				k+=j[i];
			}
		}
		if(hw(k)){
			cout<<0;
			return 0;
		}
		for(int i=0;i<k.size()/2;i++){
			if(k[i]!=k[k.size()-i]){
				ans++;
			}
		}
		cout<<ans;
	}
	return 0;
}
