#include<bits/stdc++.h>
using namespace std;
int n,ans,len;
int a;char c;
string s,m;
string rev(string s){
	string o;
	int len=s.size()-1;
	for(int i=len;i>=0;i--){
		o+=s[i];
	} return o;
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	while(n--){
		cin>>a>>c;
		for(int i=1;i<=a;i++){
			s+=c;
		}
	}
	len=s.size();
	for(int i=0,j=len-1 ;i<len ;i++,j--){
		if(s[i]!=s[j]){
			s[j]=s[i];
			ans++;
		}
	}
	cout<<ans;
	return 0;
}

