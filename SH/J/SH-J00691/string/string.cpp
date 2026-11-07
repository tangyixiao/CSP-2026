#include<bits/stdc++.h>
using namespace std;
int n,a,ans;
char c;
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	s="";
	for(int i=1;i<=n;i++){
		cin>>a>>c;
		while(a--) s=s+c;
	}
	int l=s.size();
	for(int i=0;i<(l+1)/2;i++) if(s[i]!=s[l-i-1]) ans+=1;
	cout<<ans;
	return 0;
}
