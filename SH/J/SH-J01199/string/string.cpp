#include<bits/stdc++.h>
using namespace std;
long long n,t,ans;
string s;
char c;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>t>>c;
		while(t--){
			s+=c;
		}
	}
	int len=s.size()/2;
	for(int i=0;i<len;i++){
		if(s[i]!=s[s.size()-i-1])ans++;
	}
	cout<<ans;
	return 0;
}
