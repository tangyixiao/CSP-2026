#include<bits/stdc++.h>
using namespace std;
string s;
int n,a;
char c;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	while(n--){
		cin>>a>>c;
		while(a--)s+=c; 
	}
	int len=(s.size()%2==0?s.size()/2:s.size()/2+1);
	string w=s.substr(len,len);
	long long ans=0;
	for(int i=0;i<len;i++){
		if(s[i]!=s[s.size()-i-1])ans++;
	}
	cout<<ans;
	return 0;
}