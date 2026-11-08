#include<bits/stdc++.h>
using namespace std;
int n,cnt=0;
string s[200005];
string s2;
string s3;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
cin>>n;
for(int i=0;i<=n;i++){
	cin>>s[i];
	s2+=s[i];
	}
for(int i=0;i<s2.size();i++){
	if(s2[i]>='a'&&s2[i]<='z'){
		s3+=s2[i];
	}
}
for(int i=0;i<s3.size()/2;i++){
	for(int j=s3.size();j>=s3.size()/2;j--){
		if(s3[i]=s3[j]){
			cnt+=0;
		}
		if(s3[i]!=s3[j]){
			cnt++;
		}
	}
}
cout<<cnt;
	return 0;
}
