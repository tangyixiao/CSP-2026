#include<bits/stdc++.h>
using namespace std;
int main(){
freopen("string.in","r",stdin);
freopen("string.out","w",stdout);
string s="";
int n;
cin>>n;
int m;
string m1;
for(int q=1;q<=n;q++){
	cin>>m>>m1;
	for(int l=1;l<=m;l++){
		s+=m1;
	}
}
int ans=0;
int s1=s.size();
for(int j=0;j<=s1/2;j++){
	if(s[j]!=s[s1-j-1]&&j<s1-j-1) ans++;
}
cout<<ans;
	
	return 0;
} 