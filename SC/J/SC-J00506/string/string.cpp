#include<bits/stdc++.h>
using namespace std;
int n,m,x,ans;
string s;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		int t;
		char c;
		cin>>t>>c;
		for(int i=m+1;i<=m+t;i++) s[i]=c;
		m+=t;
	}
	for(int i=1;;i++){
		if(s[i]<'a'||s[i]>'z') break;
		else x++;
	}
	if(x%2==0)
		for(int i=1,j=x;i<=x/2,j>=x/2+1;i++,j--){
			if(s[i]!=s[j]) ans++;
		}
	else
		for(int i=1,j=x;i<=x/2+1,j>=x/2+1;i++,j--){
			if(s[i]!=s[j]) ans++;
		}
	cout<<ans;
	return 0;
}