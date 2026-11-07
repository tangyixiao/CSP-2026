#include<bits/stdc++.h>
using namespace std; 
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int q=0,w=0,r=0,t=0;
	char c,c1;
	bool b=0,v=0,vis=0;
	string s,s1,s2,s3;
	cin>>s>>s1>>s2>>s3;
	c=s1[2];
	c1=s3[2];
	q+=(s[0]-'0')*10;
	q+=(s[1]-'0');
	w+=(s2[0]-'0')*10;
	w+=(s2[1]-'0');
	if(q==w){
		b=1;
		cout<<1;
	}
	else{
		cout<<0;
	}
	r=(s1[0]-'0')*10+(s1[1]-'0');
	w=(s3[0]-'0')*10+(s3[1]-'0');
	if(r==w&&b==1){
		cout<<1;
		v=1;
	}
	else{
		cout<<0;
	}
	if((c=='D'||c=='F')&&(c1=='D'||c1=='F')&&b==1&&v==1){
		cout<<1;
		vis=1;
	}
	else{
		if(v==0){
			cout<<0;
		}
		else{
			if((c=='A'||c=='B'||c=='C')&&(c1=='A'||c1=='B'||c1=='C')){
				vis=1;
				cout<<1;
			}
			else{
//				cout<<c<<c1;
				cout<<0;
			}
		}	
	}
	int qq=abs(c-c1);
	if((c=='A'||c=='B'||c=='C')&&(c1=='A'||c1=='B'||c1=='C')&&qq==1&&vis==1){
		cout<<1;
	}
	else{
		if((c=='F'||c1=='F')&&q==2){
			cout<<1;
		}
		else{
			cout<<0;
		}
	}
}
