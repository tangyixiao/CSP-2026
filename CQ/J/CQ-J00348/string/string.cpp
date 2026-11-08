#include<bits/stdc++.h>
using namespace std;
int n,l,ans=0;;
struct S{
	int a;
	char c;
}s[20005];
string ss;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>s[i].a>>s[i].c;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=s[i].a;j++){
			ss[l+j]=s[i].c;
		}
		l+=s[i].a;
	}
	for(int i=1;i*2<=l;i++){
		if(ss[i]!=ss[l+1-i]){
			ans++;
		}
	}
	cout<<ans;
	return 0;
}
