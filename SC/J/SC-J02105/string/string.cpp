#include<bits/stdc++.h>
using namespace std;
int n,x,len,ans;
char c;
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>x>>c;
		for(int j=1;j<=x;j++){
			s[len]=c;
			len++;
		}
	}
	len--;
	for(int i=0;i<=len/2;i++){
		if(s[i]!=s[len-i])ans++;
	}
	cout<<ans;
	return 0;
}