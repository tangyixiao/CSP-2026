#include<bits/stdc++.h>
using namespace std;
string str;
long long ans;
int main(){
	freopen("string.in","r",stdin);	
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		int a;
		char c;
		cin>>a>>c;
		for(int j=1;j<=a;j++) str+=c;
	}
	string t=str;
	reverse(t.begin(),t.end());
	for(int i=0;i<t.size();i++){
		if(str[i]!=t[i]) ans++;
	}
	cout<<ans/2;
	return 0;
}/*
6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b
*/
