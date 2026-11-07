#include<bits/stdc++.h>
using namespace std;
string s,s1,s2,s3;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>s;
	cin>>s1;
	cin>>s2>>s3;
	int n=(s[0]-'0')*10+s[1]-'0';
	int m=(s2[0]-'0')*10+s2[1]-'0';
	int b=(s1[0]-'0')*10+s1[1]-'0';
	int v=(s3[0]-'0')*10+s3[1]-'0';
	if(n!=m){
		cout<<0<<0<<0<<0;
	}else{
		cout<<1;
		if(b!=v){
			cout<<0<<0<<0;
		}else{
			cout<<1;
			if((s1[2]=='A'||s1[2]=='B'||s1[2]=='C')&&(s3[2]=='A'||s3[2]=='B'||s3[2]=='C')){
				cout<<1;
				if(s1[2]-1==s3[2]||s1[2]+1==s3[2]){
					cout<<1;
				}else{
					cout<<0;
				}
			}else if(s1[2]=='F'&&s3[2]=='D'||s1[2]=='D'&&s3[2]=='F'){
				cout<<1;
				cout<<1;
			}else{
				cout<<0;
				cout<<0;
			}
		}
	}
	
	
	
	return 0;
}
