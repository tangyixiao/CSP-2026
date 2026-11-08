#include<bits/stdc++.h>
#define tin long long
using namespace std;
tin n,ans;
struct node{
	tin a;
	char c;
}s[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n;
	for(tin i=1;i<=n;i++)
		cin>>s[i].a>>s[i].c;
	tin rum=0,las=0,la=0;
	for(tin l=1,r=n;l<r;l++){
		las+=s[l].a;
		while(l<r&&rum+s[r].a-la<=las){
			ans+=(s[l].c!=s[r].c)*(s[r].a-la);
			rum+=s[r].a-la,la=0,r--;
		}ans+=(s[l].c!=s[r].c)*(las-rum);
		la+=las-rum,rum=las;
	}cout<<ans;
	return 0;
}
