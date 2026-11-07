#include<bits/stdc++.h>
using namespace std;
int n;
int a[200005];
char c[200005];
string s,s1,s2;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		for(int j=1;j<=a[i];j++){
			s=s+c[i];
		}
	}
	string s1,s2,s3;;
	int cs=s.size()/2;
	for(int i=0;i<cs;i++){
		s1=s1+s[i]; 
	}
	for(int i=cs;i<=s.size();i++){
		s2=s2+s[i];
	}
	if(s1.size()==s2.size()){
		for(int i=s2.size();i>=1;i--){
			s3=s3+s2[i];
		}
	}else{
		for(int i=s2.size()-2;i>=1;i--){
			s3=s3+s2[i];
		}
	}
	int cs1=0;
	for(int i=0;i<=s3.size();i++){
		if(s3[i]!=s1[i]){
			cs1++;
		}
	}
	cout<<cs1;
	return 0;
}
