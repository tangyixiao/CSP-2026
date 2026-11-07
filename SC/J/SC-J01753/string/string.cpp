#include<bits/stdc++.h>
using namespace std;
int n,ans,len;
string s;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		int l;char c;
		cin>>l>>c;
		len+=l;
		while(l--){
			s+=c;
		}
	}s+='\0';
	for(int l=0,r=len-1;l!=r;l++,r--){
		if(s[l]!=s[r])ans++;
	}
	cout<<ans;
}