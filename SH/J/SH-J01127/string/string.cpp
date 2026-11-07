#include<bits/stdc++.h>
using namespace std;
long long n,a,len,ans;
string s,t;
int main(){
	freopen("string.in","w",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a>>t;
		len+=a;
		for(int j=1;j<=a;j++){
			s+=t;
		}
	}for(int i=0;i<len;i++){
		if(s[i]!=s[len-i-1])ans++;
	}cout<<ans/2;
}
