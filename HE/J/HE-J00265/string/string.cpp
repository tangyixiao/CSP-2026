#include<bits/stdc++.h>
using namespace std;
string s1,s2;
char a,b;
int n,q,g;
long long ans;
int main(){
freopen("string.in","r",stdin);
freopen("string.out","w",stdout);
cin>>n;
for(int i=1;i<=n;i++){
	cin>>q>>a;
	for(int j=1;j<=q;j++){
		s1+=a;
	}
	if(i==1){
		g=q;
		b=a;
	}
}
s2=s1;
reverse(s1.begin(),s1.end());
if(s1==s2){
	cout<<"0";
}
else{
	reverse(s1.begin(),s1.end());
	for(int i=s1.size()-1;i>=0;i--){
reverse(s1.begin(),s1.end());
s2=s1;
reverse(s1.begin(),s1.end());
if(s1==s2){
	cout<<ans;
	return 0;
}
else{
	if(s1[i]!=b){
		s1[i]=b;
		ans++;
		
	}
}
	}
}
	return 0;
}

