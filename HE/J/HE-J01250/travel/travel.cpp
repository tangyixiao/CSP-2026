#include<bits/stdc++.h>
using namespace std;
int main(){
//	freopen("travel.in","r",stdin);
//	freopen("travel.out","w",stdout);
string s,s1,s2,s3;
cin>>s>>s1>>s2>>s3;
long long n,n1,n2,n3;
if(s==s2){
	n=1;
}
else {n=0;}
if(s==s2&&s1[0]==s3[0]&&s1[1]==s3[1]){
	n1=1;
}
else {n1=0;}
if(s==s2&&s1[0]==s3[0]&&s1[1]==s3[1]&&s1[2]>='A'&&s1[2]<='C'&&s3[2]>='A'&&s3[2]<='C'||s==s2&&s1[0]==s3[0]&&s1[1]==s3[1]&&s1[2]>='D'&&s1[2]<='F'&&s3[2]>='D'&&s3[2]<='F'){
    n2=1;	
}
else {n2=0;}
if(s==s2&&s1[0]==s3[0]&&s1[1]==s3[1]&&s1[2]>='A'&&s1[2]<='C'&&s3[2]>='A'&&s3[2]<='C'||s==s2&&s1[0]==s3[0]&&s1[1]==s3[1]&&s1[2]>='D'&&s1[2]<='F'&&s3[2]>='D'&&s3[2]<='F'){
	if(s1[2]=='A'&&s3[2]=='B'||s1[2]=='B'&&s3[2]=='C'||s3[2]=='A'&&s1[2]=='B'||s3[2]=='B'&&s1[2]=='C'||s1[2]=='D'&&s3[2]=='F'||s1[2]=='F'&&s3[2]=='D'){
	n3=1;
	}
}
else {
n3=0;
}
cout<<n<<n1<<n2<<n3;
	return 0;
}
/*
02 01A 02 01B
*/
