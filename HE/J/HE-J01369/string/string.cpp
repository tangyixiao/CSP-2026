#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
string s="";
int n,len,ans=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++){
		int l;
		char c;
		cin>>l>>c;
		for(int i=0;i<l;i++)s+=c;
		len+=l;
		
	}
	cout<<s;
	for(int i=0;i<((len+1)/2);i++)ans+=(s[i]!=s[len-i]);
		
	cout<<ans;
	
	return 0;
}



