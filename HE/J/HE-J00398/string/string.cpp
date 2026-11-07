#include<bits/stdc++.h>
using namespace std;
string s;
long long a,n,ans;
char b;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	while(n--){
		cin>>a>>b;
		for(long long i=1;i<=a;i++) s+=b;
	}
	for(long long i=0;i<s.size();i++){
		if(s[i]!=s[s.size()-i-1]) ans++;
	}
	cout<<ans/2;
	return 0;
}
