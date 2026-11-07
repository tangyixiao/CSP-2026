#include<bits/stdc++.h>
using namespace std;
string a,s1,b,s2;
int n1,m1,n2,m2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>s1>>b>>s2;
	if(a[0]=='0') n1=a[1]-'0';
	else n1=(a[0]-'0')*10+a[1]-'0';
	if(b[0]=='0') n2=b[1]-'0';
	else n2=(b[0]-'0')*10+b[1]-'0';
	
	if(n1==n2) cout<<1;
	else{
		cout<<0<<0<<0<<0;
		return 0;
	}
	if(s1[0]=='0') m1=s1[1]-'0';
	else m1=(s1[0]-'0')*10+s1[1]-'0';
	if(s2[0]=='0') m2=s2[1]-'0';
	else m2=(s2[0]-'0')*10+s2[1]-'0';
	
	if(m1==m2) cout<<1;
	else{
		cout<<0<<0<<0;
		return 0;
	}
	if(s1[2]>='A'&&s1[2]<='C'&&s2[2]>='A'&&s2[2]<='C'){
		cout<<1;
	}else if(s1[2]>='D'&&s1[2]<='F'&&s2[2]>='D'&&s2[2]<='F'){
		cout<<1;
	}else{
		cout<<0<<0;
		return 0;
	}
	if(s1[2]-s2[2]==1||s2[2]-s1[2]==1){
		cout<<1;
	}else{
		cout<<0;
	}
	return 0;
} 
