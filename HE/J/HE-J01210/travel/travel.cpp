#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int c3,c4;
int s3,s4;
bool f;
int mp(string a){
	if(a[0]-'0'==0)  return a[1]-'0';
	return (a[0]-'0')*10+a[1]-'0';
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin>>c1>>s1>>c2>>s2;
	c3=mp(c1);
	s3=mp(s1);
	c4=mp(c2);
	s4=mp(s2);
	if(c3==c4) cout<<1;
	else{
		f=true;
		cout<<0;
	} 
	if(s3==s4&&f==false) cout<<1;
	else{
		f=true;
		cout<<0;
	} 
	if(s3==s4&&(s1[2]=='A'||s1[2]=='B'||s1[2]=='C')&&(s2[2]=='A'||s2[2]=='B'||s2[2]=='C')&&f==false)   cout<<1;
	else if(s3==s4&&(s1[2]=='D'||s1[2]=='E')&&(s2[2]=='D'||s2[2]=='E')&&f==false) {
		cout<<1;
	}
	 else{
	 	f=true;
		 cout<<0;
	 } 
	 if(f==false){
	 	if(s1[2]==s2[2]+1||s1[2]==s2[2]-1)   cout<<1;
	 	else cout<<0;
	 }
	 else if(f==true){
	 	cout<<0;
	 }
	 return 0;
	 
	
	
}
